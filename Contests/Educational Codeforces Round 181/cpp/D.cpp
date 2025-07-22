#include <bits/stdc++.h>

using namespace std;

static const int MOD = 998244353;
using int64 = long long;

// Fast exponentiation mod
int64 modexp(int64 a, int64 e = MOD-2) {
    int64 r = 1;
    a %= MOD;
    while (e) {
        if (e & 1) r = r * a % MOD;
        a = a * a % MOD;
        e >>= 1;
    }
    return r;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m; cin >> n >> m;

    // 1. For each segment j: its left endpoint l[j], and weight w[j] = p_j * inv(q_j - p_j) % MOD
    // 2. To accumulate C = prod((q_j - p_j) / q_j) mod, by doing C_num = prod(q_j - p_j), C_den = prod(q_j)
    vector<int> L(n), R(n);
    vector<int64> W(n);
    vector<vector<int>> endsAt(m+1);

    int64 C_num = 1, C_den = 1;

    for(int i = 0; i < n; i++){
        int l, r; int64 p, q;
        cin >> l >> r >> p >> q;
        L[i] = l; R[i] = r;
        // Q_j numerator = q - p  (nonzero mod, since p < q < MOD)
        int64 qmp = (q - p) % MOD;
        if (qmp < 0) qmp += MOD;
        // weight w_j = p / (q - p)
        W[i] = p % MOD * modexp(qmp) % MOD;
        // Accumulate C's numerator and denominator
        C_num = C_num * qmp % MOD;
        C_den = C_den * (q % MOD) % MOD;
        // Register this segment ends at r
        endsAt[r].push_back(i);
    }

    // Compute C = C_num * inv(C_den) % MOD
    int64 C = C_num * modexp(C_den) % MOD;

    // dp[i] = total weight of tilings of [1..i]
    vector<int64> dp(m+1, 0);
    dp[0] = 1;

    for(int i = 1; i <= m; i++){
        int64 sum = 0;
        // Consider all segments j that end at i
        for(int j : endsAt[i]){
            int l = L[j];
            // We extend a tiling of [1..l-1] by segment j
            sum = (sum + dp[l - 1] * W[j]) % MOD;
        }
        dp[i] = sum;
    }

    // S = dp[m], and answer = C * S % MOD
    int64 ans = C * dp[m] % MOD;
    cout << ans << endl;

    return 0;
}