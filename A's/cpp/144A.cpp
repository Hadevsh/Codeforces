#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    vector<int> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    int mi = s[0], ma = s[0];
    int mi_i = 0, ma_i = 0;
    for (int i = 0; i < n; i++) {
        mi = min(s[i], mi);
        ma = max(s[i], ma);
    }

    // Find the leftmost occurrence of the maximum value
    for (int i = 0; i < n; i++) {
        if (s[i] == ma) {
            ma_i = i;
            break; // Leftmost occurrence
        }
    }

    // Find the rightmost occurrence of the minimum value
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == mi) {
            mi_i = i;
            break; // Rightmost occurrence
        }
    }

    // Calculate the total seconds
    int secs = ma_i + (n - 1 - mi_i);
    if (mi_i < ma_i) {
        secs--; // Subtract 1 if they cross each other
    }
    cout << secs << endl;
    
    return 0;
}