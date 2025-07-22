#include <bits/stdc++.h>

using namespace std;
using int64 = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int64 a, b, k; cin >> a >> b >> k;

        // Greatest common divisor
        int64 g = gcd(a, b);

        // 128-bit to avoid overflow
        auto ceil_divisor = [&](int64 x, int64 y) {
            return (int64)((__int128)x + y - 1) / y;
        };
        int64 X1 = ceil_divisor(a, k);
        int64 X2 = ceil_divisor(b, k);
        int64 X = max(X1, X2);

        cout << (g >= X ? 1 : 2) << endl;
    }
    
    return 0;
}