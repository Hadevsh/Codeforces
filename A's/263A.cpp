#include <bits/stdc++.h>

using namespace std;

int main() {
    int n = 5; // Must be an odd number

    int x = n / 2, y = n / 2; // Middle of the matrix
    int x1, y1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int v; cin >> v;
            if (v == 1) {
                x1 = i;
                y1 = j;
            }
        }
    }

    int res = abs(x1 - x) + abs(y1 - y);
    cout << res;
    
    return 0;
}