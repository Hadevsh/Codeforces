#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;

    while (t--) {
        int s; cin >> s;

        int n {10};
        int sum {0};
        vector<int> nums;
        while (n--) {
            if (sum < s) {
                if (sum + n <= s) {
                    sum += n;
                    nums.insert(nums.begin(), n);
                }
            }
        }

        for (auto c : nums) {
            cout << c;
        }
        cout << endl;
    }
    
    return 0;
}