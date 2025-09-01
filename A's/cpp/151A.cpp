#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, k, l, c, d, p, nl, np;
    if (!(cin >> n >> k >> l >> c >> d >> p >> nl >> np)) return 0;

    long long drink_toasts = (k * l) / nl; // total toasts possible from drink
    long long lime_toasts  = c * d;        // total toasts possible from lime slices
    long long salt_toasts  = p / np;       // total toasts possible from salt

    long long total_toasts = min({drink_toasts, lime_toasts, salt_toasts});
    cout << (total_toasts / n) << '\n';
    
    return 0;
}