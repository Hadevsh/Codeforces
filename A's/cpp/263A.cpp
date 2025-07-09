#include <bits/stdc++.h>

using namespace std;

int main() {
    int n = 5; // Must be an odd number

    int m = n / 2; // Middle of the matrix
    int x, y;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int v; cin >> v;
            if (v == 1) {
                x = i;
                y = j;
            }
        }
    }

    int res = abs(x - m) + abs(y - m);
    cout << res;
    
    return 0;
}