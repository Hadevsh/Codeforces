#include <bits/stdc++.h>

using namespace std;

int main() {
    int k, n, w;
    cin >> k >> n >> w;
    int price {0};

    for (int i = 1; i <= w; i++) {
        price += i * k;
    }

    int res = price - n;
    if (res <= 0) {
        res = 0;
    }
    cout << res << endl;
    
    return 0;
}