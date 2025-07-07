#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    int res = 0;

    while (t--) {
        string w;
        cin >> w;

        if (w.front() == *"-" || w.back() == *"-") { res--; }
        else { res++; }
    }
    cout << res;

    return 0;
}