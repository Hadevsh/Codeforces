#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;

    int passengers = 0;
    int cap = 0;

    while (n--) {
        int a, b; cin >> a >> b;
        passengers -= a;
        passengers += b;
        cap = max(cap, passengers);
    }

    cout << cap << endl;
    
    return 0;
}