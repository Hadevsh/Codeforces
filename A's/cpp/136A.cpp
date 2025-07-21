#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    vector<int> p(n+1), gave_to(n+1);
    // p[i] = the friend who gave a gift to friend i
    for (int i = 1; i <= n; i++) {
        cin >> p[i];
    }
    // Invert: for each receiver i, giver = p[i], so giver gave to i
    for (int i = 1; i <= n; i++) {
        gave_to[p[i]] = i;
    }
    // Output: gave_to[i] = the friend to whom friend i gave a gift
    for (int i = 1; i <= n; i++) {
        cout << gave_to[i] << (i==n ? '\n' : ' ');
    }
    
    return 0;
}