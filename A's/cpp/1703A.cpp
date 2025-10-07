#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; 
    if(!(cin >> t)) return 0;
    while (t--) {
        string s; 
        cin >> s;
        for (auto &ch : s) ch = tolower(ch);
        cout << (s == "yes" ? "YES" : "NO") << '\n';
    }
    
    return 0;
}