#include <bits/stdc++.h>

using namespace std;

int main() {
    string w; cin >> w;

    vector<char> nums;

    for (char c : w) {
        if (c != *"+") {
            nums.push_back(c);
        }
    }

    stable_sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); i++) {
        if (i > 0) {
            cout << '+';
        }
        cout << nums[i];
    }
    
    return 0;
}