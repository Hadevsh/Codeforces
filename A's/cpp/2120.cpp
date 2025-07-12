#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;

    while (t--) {
        int l1, b1, l2, b2, l3, b3;
        cin >> l1 >> b1 >> l2 >> b2 >> l3 >> b3;

        int side_b = b1 + b2 + b3;
        int side_l = l1 + l2 + l3;
        
        if (l1 == l2 && l2 == l3 && side_b == l1) {  // All three in a column
            cout << "YES" << endl;
        } else if (b1 == b2 && b2 == b3 && side_l == b1) {  // All three in a row
            cout << "YES" << endl;
        } else if (l2 == l3 && l1 + l2 == b1 && b2 + b3 == b1) {  // Big rectangle on the left, two small stacked on the right
            cout << "YES" << endl;
        } else if (l2 + l3 == l1 && b2 == b3 && b1 + b2 == l1) {  // Big rectangle on the right, two small stacked on the left
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}