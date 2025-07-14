#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;

    while (t--) {
        int n, k; cin >> n >> k;

        string s;
        s.reserve(n);
        s.append(k, '1');
        s.append(n - k, '0');
        cout << s << endl;
    }
    
    return 0;
}