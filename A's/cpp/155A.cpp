#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; 
    if (!(cin >> n)) return 0;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int best = a[0], worst = a[0], amazing = 0;
    for (int i = 1; i < n; ++i) {
        if (a[i] > best) { ++amazing; best = a[i]; }
        else if (a[i] < worst) { ++amazing; worst = a[i]; }
    }
    cout << amazing << '\n';

    return 0;
}