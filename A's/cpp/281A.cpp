#include <bits/stdc++.h>

using namespace std;

int main() {
    string w; cin >> w;
    string uppercase = "QWERTYUIOPASDFGHJKLZXCVBNM";
    string lowercase = "qwertyuiopasdfghjklzxcvbnm";

    if (uppercase.find(w[0]) != string::npos) {
        cout << w << endl;
    }
    else {
        w[0] = uppercase[lowercase.find(w[0])];
        cout << w << endl;
    }
    
    return 0;
}