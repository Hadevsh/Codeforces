#include <bits/stdc++.h>

using namespace std;

int main() {
    string a, b; cin >> a >> b;

    string res;
    res.reserve(a.size());
    for (int i = 0; i < a.size(); i++) {
        // XOR: '1' if bits differ, else '0'
        res.push_back(a[i] != b[i] ? '1' : '0');
    }
    cout << res << endl;
    
    return 0;
}