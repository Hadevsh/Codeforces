#include <bits/stdc++.h>

using namespace std;

int main() {
    string n; cin >> n;

    int l = 0;

    for (char c : n) {
        if (c == '4' || c == '7') {
            l++;
        }
    }

    cout << (l == 4 || l == 7 ? "YES" : "NO") << endl;
    
    return 0;
}