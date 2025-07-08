#include <bits/stdc++.h>

using namespace std;

int main() {
    string w; cin >> w;

    vector<char> distinct;

    for (auto c : w) {
        if (find(distinct.begin(), distinct.end(), c) == distinct.end()) {
            distinct.push_back(c);
        }
    }

    int l = distinct.size();
    if (l % 2 == 0) {  // Female
        cout << "CHAT WITH HER!" << endl;
    }
    else {  // Male
        cout << "IGNORE HIM!" << endl;
    }
    
    return 0;
}