#include <bits/stdc++.h>

using namespace std;

int main() {
    int y, w; cin >> y >> w;
    int m = max(y, w);
    int num = 7 - m; // Number of winning faces
    int tot = 6; // Number of total faces

    if (num == 0) {  // If no chance
        cout << "0/1" << endl;
    } else {
        int g = gcd(num, tot); // Greatest common divisor
        num /= g; tot /= g;
        cout << num << "/" << tot << endl;
    }
    
    return 0;
}