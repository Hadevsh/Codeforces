#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m; cin >> n >> m;
    bool right = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i % 2 == 0) cout << "#";
            else  {
                if ((right && j == m - 1) || (!right && j == 0)) cout << "#";
                else cout << ".";
            }
        }
        if (i % 2 != 0) right = !right;
        cout << endl;
    }
    
    return 0;
}