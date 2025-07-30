#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    int faces = 0;
    while (n--) {
        string s; cin >> s;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        if (s == "tetrahedron") faces += 4;
        else if (s == "cube") faces += 6;
        else if (s == "octahedron") faces += 8;
        else if (s == "dodecahedron") faces += 12;
        else if (s == "icosahedron") faces += 20;
    }
    cout << faces << endl;
    
    return 0;
}