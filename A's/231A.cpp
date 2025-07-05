#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    int score = 0;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b + c > 1) {
            ++score;
        }
    }
    cout << score;

    return 0;
}
