#include <bits/stdc++.h>

using namespace std;

int main() {
    string s1, s2; cin >> s1 >> s2;
    string uppercase = "QWERTYUIOPASDFGHJKLZXCVBNM";
    string lowercase = "qwertyuiopasdfghjklzxcvbnm";

    for (int i = 0; i < s1.size(); i++) {
        if (uppercase.find(s1[i]) != string::npos) {
            s1[i] = lowercase[uppercase.find(s1[i])];
        }
        if (uppercase.find(s2[i]) != string::npos) {
            s2[i] = lowercase[uppercase.find(s2[i])];
        }
    }

    if (s1 < s2) {
        cout << "-1" << endl;
    }
    else if (s2 < s1) {
        cout << "1" << endl;
    }
    else {
        cout << "0" << endl;
    }

    return 0;
}