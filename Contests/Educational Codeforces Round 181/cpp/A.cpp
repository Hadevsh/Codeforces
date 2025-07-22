#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while (t--) {
        string s; cin >> s;

        int t_count = 0;
        int f_count = 0;
        int n_count = 0;
        string other;

        for (char c : s) {
            if (c == 'T') t_count++;
            else if (c == 'F') f_count++;
            else if (c == 'N') n_count++;
            else other += c;
        }

        string res;
        res.append(t_count, 'T');
        res.append(f_count, 'F');
        res.append(n_count, 'N');
        res += other;

        cout << res << endl;
    }
    
    return 0;
}