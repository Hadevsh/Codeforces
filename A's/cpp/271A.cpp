#include <bits/stdc++.h>

using namespace std;

int main() {
    int y; cin >> y;

    int res {y + 1};

    while (true) {
        string res_s = to_string(res);
        set<char> res_v (res_s.begin(), res_s.end());

        if (res_v.size() == res_s.size()) {
            cout << res;
            break;
        }
        res++;
    }
    
    return 0;
}