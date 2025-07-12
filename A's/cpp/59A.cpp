#include <bits/stdc++.h>

using namespace std;

int main() {
    string s; cin >> s;

    string uppercase = "QWERTYUIOPASDFGHJKLZXCVBNM";

    int n = s.size();
    int u {0}; int l {0};
    for (int i = 0; i < n; i++) {
        if (uppercase.find(s[i]) != string::npos) {  // If in uppercase
            u++;
        } else {
            l++;
        }
    }

    if (u > l) {  // More uppercase letters
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    } else {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }

    cout << s << endl;
    
    return 0;
}