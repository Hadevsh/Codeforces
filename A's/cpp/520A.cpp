#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    string s; cin >> s;

    int mask = 0;
    for (char c : s) {
        // Map both 'A'-'Z' and 'a'-'z' into 0-25
        int index = tolower(c) - 'a';
        mask |= 1 << index;
    }

    // If all 26 bits are set, mask == (1 << 26) - 1
    cout << ((mask == (1 << 26) - 1) ? "YES" : "NO") << endl;
    
    return 0;
}