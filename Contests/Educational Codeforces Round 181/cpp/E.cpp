#include <bits/stdc++.h>

using namespace std;

static const int MOD = 998244353;
int add(int a, int b) {
    a += b;
    if (a >= MOD) a -= MOD;
    return a;
}
int sub(int a, int b) {
    a -= b;
    if (a >= MOD) a += MOD;
    return a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    
    vector<pair<int, int>> tests(t);
    int max_x = 0;
    
    for (int i = 0; i < t; i++) {
        int n, x; cin >> n >> x;
        tests[i] = {n, x};
        max_x = max(max_x, x);
    }
    
    // Largest i with i * (i + 1) / 2 <= max_x 
    int n0 = (int)((sqrt(8.0 * max_x + 1) - 1) / 2);
    // Any n > n0 has 0 answers
    vector<vector<int>> by_n(n0+1);
    for (int i = 0; i < t; i++) {
        int n = tests[i].first;
        if (n <= n0) by_n[n].push_back(i);
    }

    vector<int> res(t, 0);
    vector<int> dp(max_x+1, 0);
    dp[0] = 1; // One way to partition 0

    // Build dp[...] = p (M, <= i) as it goes 1..n0
    vector<int> pref;
    for (int i = 1; i <= n0; i++) {
        // Add part size i = into the "ubounded knapsack"
        for (int M = i; M <= max_x; M++) {
            dp[M] = add(dp[M], dp[M - i]);
        }
        // dp[M] is now partitions of M with parts <= i
        
        // Max M we ever need to answer tests with n = i:
        // X' = x - i * (i - 1) / 2 must be >= i and <= max_x
        long long cut = max_x - (long long)i * (i - 1) / 2;
        if (cut < i) {
            // None of the test with this n can be != zero
            for (int idx : by_n[i]) {
                res[idx] = 0;
                continue;
            }
        }
        int max_M = (int)cut;
        // Build prefix sum pref[M] = sum_{t=0..M} dp[t]
        pref.resize(max_M + 1);
        pref[0] = dp[0];
        for (int M = 1; M <= max_M; M++){
            pref[M] = add(pref[M - 1], dp[M]);
        }

        // Answer all tests with n = i
        for (int idx : by_n[i]) {
            int x = tests[idx].second;
            long long Xp = x - (long long)i * (i - 1) / 2;
            if (Xp < i) {
                res[idx] = 0;
            } else {
                int up = (int)Xp;
                // sum_{M=i..up} dp[M] = pref[up] - pref[i - 1]
                res[idx] = sub(pref[up], pref[i - 1]);
            }
        }
    }

    // All n > n0 remain 0
    for (int i = 0; i < t; i++) {
        cout << res[i] << endl;
    }

    return 0;
}