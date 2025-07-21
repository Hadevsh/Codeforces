#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n; cin >> n;
    if (n % 2 == 0) {
        // n = 2k -> f(n) = k
        cout << (n / 2) << endl;
    } else {
        // n = 2k + 1 -> f(n) = -(k + 1) = -((n + 1) / 2)
        cout << -((n + 1) / 2) << endl;
    }
    
    return 0;
}