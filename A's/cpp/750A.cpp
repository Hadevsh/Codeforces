#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    if (!(cin >> n >> k)) return 0;
    int time_left = 240 - k;
    int solved = 0, spent = 0;

    for (int i = 1; i <= n; ++i) {
        int need = 5 * i;
        if (spent + need > time_left) break;
        spent += need;
        ++solved;
    }
    cout << solved;
    
    return 0;
}