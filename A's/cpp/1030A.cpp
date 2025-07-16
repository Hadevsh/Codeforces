#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    string res = "EASY";

    while (n--) {
        int i; cin >> i;
        if (i == 1) { res = "HARD"; }
    }

    cout << res << endl;
    
    return 0;
}