#include <bits/stdc++.h>

using namespace std;

vector<int> primes = {2, 3, 5, 7};
long long compute_inclusion_exclusion(long long l, long long r, const vector<int>& primes) {
    long long result = 0;
    int n = primes.size();
    for (int mask = 1; mask < (1 << n); mask++) {
        int bits = __builtin_popcount(mask);
        long long product = 1;
        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) {
                product *= primes[i];
                if (product > r) {
                    product = 0;
                    break;
                }
            }
        }
        if (product == 0) continue;
        long long count = r / product - (l - 1) / product;
        if (bits % 2 == 1) {
            result += count;
        } else {
            result -= count;
        }
    }
    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while (t--) {
        long long l, r; cin >> l >> r;
        long long bad = compute_inclusion_exclusion(l, r, primes);
        long long total = r - l + 1;
        long long good = total - bad;
        cout << good << endl;
    }
    
    return 0;
}