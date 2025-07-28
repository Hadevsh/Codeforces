#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    vector<int> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    int mi, ma = s[0];
    int mi_i, ma_i = 0;
    for (int i = 0; i < n; i++) {
        mi = min(s[i], mi);
        ma = max(s[i], ma);
    }
    for (int i = 0; i < n; i++) {
        if (s[i] == ma) ma_i = i;
    }
    for (int i = n - 1; i > 0; i--) {
        if (s[i] == mi) mi_i = i;
    }

    int secs = 0;
    if (mi_i < ma_i) {  // If min height is before the max height
        secs = ma_i + (n - mi_i) - 2;
    } else {
        secs = ma_i + (n - mi_i);
    }
    cout << secs << endl;
    
    return 0;
}