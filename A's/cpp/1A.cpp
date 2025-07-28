#include <bits/stdc++.h>

using namespace std;

int main() {
    float n, m, a; cin >> n >> m >> a;
    int res = ceil(n / a) + ceil(m / a);
    cout << res << endl;
    
    return 0;
}