#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, t; cin >> n >> t;
    string s; cin >> s;

    while (t--) {
        for (int i = 0; i + 1 < n; i++) {
            if (s[i] == 'B' && s[i + 1] == 'G') {
                swap(s[i], s[i + 1]);
                i++; // Skip since we just swapped
            }
        }
    }

    cout << s << endl;
    
    return 0;
}