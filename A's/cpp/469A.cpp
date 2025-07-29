#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;

    int x; cin >> x;
    vector<int> X(x);
    for (int i = 0; i < x; i++) {
        cin >> X[i];
    }
    int y; cin >> y;
    vector<int> Y(y);
    for (int i = 0; i < y; i++) {
        cin >> Y[i];
    }

    bool can = true;
    for (int i = 1; i <= n; i++) {
        if (!(find(X.begin(), X.end(), i) != X.end() || find(Y.begin(), Y.end(), i) != Y.end())) {
            can = false;
            break;   
        }
    }
    cout << (can ? "I become the guy." : "Oh, my keyboard!") << endl;

    return 0;
}