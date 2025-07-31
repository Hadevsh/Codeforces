#include <bits/stdc++.h>

using namespace std;

int main() {
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;

    // Sort the coordinates to find the median
    int coordinates[] = {x1, x2, x3};
    sort(coordinates, coordinates + 3);

    int median = coordinates[1];

    // Calculate the total distance
    int total_distance = abs(x1 - median) + abs(x2 - median) + abs(x3 - median);

    cout << total_distance << endl;

    return 0;
}