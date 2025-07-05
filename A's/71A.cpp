#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;

    while (t--) {
        string w;
        cin >> w;

        int n = w.length();
        if (n > 10) {
            cout << w[0] << n - 2 << w[n - 1];
        } else { cout << w; }
        cout << endl;
    }

    return 0;
}
