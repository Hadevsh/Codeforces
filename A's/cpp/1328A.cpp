#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int a, b; cin >> a >> b;
        int moves = 0;

        while (a % b != 0) {
            moves++; a++;
        }   
        cout << moves << endl;
    }
    
    return 0;
}