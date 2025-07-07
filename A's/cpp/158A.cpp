#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k; cin >> n >> k;

    vector<int> v;

    while (n--) {
        int w; cin >> w;
        v.push_back(w);
    }

    int score = 0;
    int pass_score = v.at(k - 1);
    
    for (int i = 0; i < v.size(); i++) {
        if (v.at(i) >= pass_score && v.at(i) > 0) {
            score++;
        }
    }
    cout << score << endl;
    
    return 0;
}