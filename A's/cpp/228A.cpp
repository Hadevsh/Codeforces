#include <bits/stdc++.h>

using namespace std;

int main() {
    int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;

    set<int> st = {s1, s2, s3, s4};
    cout << (4 - (int)st.size()) << endl;

    return 0;
}