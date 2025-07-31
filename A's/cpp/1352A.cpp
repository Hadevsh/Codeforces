#include <bits/stdc++.h>

using namespace std;

vector<int> getRoundNumbers(int n) {
    vector<int> roundNumbers;
    int position = 1; // Represents the current digit position (units, tens, hundreds, etc.)
    
    while (n > 0) {
        int digit = n % 10;
        if (digit != 0) {
            roundNumbers.push_back(digit * position);
        }
        n /= 10;
        position *= 10;
    }
    
    return roundNumbers;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> roundNumbers = getRoundNumbers(n);
        
        cout << roundNumbers.size() << endl;
        for (int num : roundNumbers) {
            cout << num << " ";
        }
        cout << endl;
    }
    
    return 0;
}