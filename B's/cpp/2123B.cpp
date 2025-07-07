#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    vector<string> results;

    while (t--) {
        int n, j, k; 
        cin >> n >> j >> k;

        vector<int> s;

        while (n--) {
            int a; cin >> a;
            s.push_back(a);
        }

        if (k >= 2) {
            // If we're keeping at least 2 players, ANYONE can sneak into the last k.
            results.push_back("YES");
        } else {  // k == 1
            // Only the strongest can possibly be the sole survivor.
            int mx = *max_element(s.begin(), s.end());
            // j is 1-indexed
            if (s[j - 1] == mx) {
                results.push_back("YES");
            } else {
                results.push_back("NO");
            }
        }
    }

    for (int i = 0; i < results.size(); i++) {
        cout << results.at(i) << endl;
    }
    
    return 0;
}