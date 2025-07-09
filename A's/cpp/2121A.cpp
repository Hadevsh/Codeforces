#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;

    while (t--) {
        int n, s; 
        cin >> n >> s;

        vector<int> values(n);
        
        for (int i = 0; i < n; i++) {
            cin >> values[i];
        }

        sort(values.begin(), values.end());
        int Lvalue = values.front();
        int Rvalue = values.back();

        // If s (starting pos) is already to the left (or right) of the whole interval we just need to walk it to the far end
        if (s <= Lvalue) {
            cout << Rvalue - s << endl;
        } else if (s >= Rvalue) {
            cout << s - Lvalue << endl;
        } else {
            // If s is in Lvalue, Rvalue, choose the cheaper "sweep" order
            int goL = 2 * (s - Lvalue) + (Rvalue - s);
            int goR = 2 * (Rvalue - s) + (s - Lvalue);
            cout << min(goL, goR) << endl; // Fastest "route"
        }
    }
    
    return 0;
}