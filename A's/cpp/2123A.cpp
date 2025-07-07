#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    vector<string> winners;

    while (t--) {
        int n; cin >> n;

        if (n % 4 == 0) {
            winners.push_back("Bob");
        } else {
            winners.push_back("Alice");
        }
    }

    for (int i = 0; i < winners.size(); i++) {
        cout << winners.at(i) << endl;
    }
    
    return 0;
}