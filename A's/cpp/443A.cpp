#include <bits/stdc++.h>

using namespace std;

int main() {
    string s; getline(cin, s);
    
    unordered_set<char> letters;
    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
            letters.insert(c);
        }
    }
    
    cout << letters.size() << endl;
    
    return 0;
}