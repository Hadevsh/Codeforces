#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;

    string previous;
    int groups = 0;
    while (n--) {
        string current; cin >> current;
        if (current != previous || previous.empty()) {
            groups++;
        }
        previous = current;
    }
    cout << groups << endl;
    
    return 0;
}