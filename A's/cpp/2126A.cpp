#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int x; cin >> x;
        int y = 0;
        string x_s = to_string(x);
        string y_s = to_string(y);
        bool found = false;
        while (!found) {
            for (char c : y_s) {
                if (x_s.find(c) != string::npos) {
                    cout << y << endl;
                    found = true;
                }
            }
            y++;
            y_s = to_string(y);
        }
    }
    
    return 0;
}