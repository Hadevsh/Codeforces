#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, h; cin >> n >> h;

    int width = 0;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        width += (a > h ? 2 : 1);
    }

    cout << width << endl;
    
    return 0;
}