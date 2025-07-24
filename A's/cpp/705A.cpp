#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    vector<string> v;
    for (int i = 0; i < n; i++) {
        if (i % 2 != 0 && i == n - 1) { cout << "I love it"; break; }
        else if (i % 2 == 0 && i == n - 1) { cout << "I hate it "; break; }
        else if (i % 2 != 0) cout << "I love that ";
        else cout << "I hate that ";
    }
    
    return 0;
}