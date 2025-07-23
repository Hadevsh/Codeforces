#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int n;
    cin >> n;
    vector<pair<int, int>> lr(n);
    for (int i = 0; i < n; i++) {
        cin >> lr[i].first >> lr[i].second;
    }

    int len = s.size();
    int cnt = 0;
    for (int i = 0; i + 5 < len; ) {
        if (s.substr(i, 6) == "docker") {
            cnt++;
            i += 6; // Move past the current "docker" to avoid overlapping
        } else {
            i++;
        }
    }

    vector<int> candidates;
    candidates.push_back(cnt);
    for (auto &p : lr) {
        candidates.push_back(p.first);
        candidates.push_back(p.second);
    }
    sort(candidates.begin(), candidates.end());
    candidates.erase(unique(candidates.begin(), candidates.end()), candidates.end());

    int max_attendees = 0;
    int min_changes = INT_MAX;

    for (int k : candidates) {
        if (k < 0) continue; // Not possible
        int attendees = 0;
        for (auto &p : lr) {
            if (p.first <= k && k <= p.second) {
                attendees++;
            }
        }
        if (attendees > max_attendees) {
            max_attendees = attendees;
            min_changes = abs(k - cnt);
        } else if (attendees == max_attendees) {
            min_changes = min(min_changes, abs(k - cnt));
        }
    }

    // Additional check for k = 0 if not already considered
    if (find(candidates.begin(), candidates.end(), 0) == candidates.end()) {
        int k = 0;
        int attendees = 0;
        for (auto &p : lr) {
            if (p.first <= k && k <= p.second) {
                attendees++;
            }
        }
        if (attendees > max_attendees) {
            max_attendees = attendees;
            min_changes = abs(k - cnt);
        } else if (attendees == max_attendees) {
            min_changes = min(min_changes, abs(k - cnt));
        }
    }

    cout << min_changes << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}