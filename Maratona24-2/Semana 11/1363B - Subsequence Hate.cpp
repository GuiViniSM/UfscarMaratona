#include <bits/stdc++.h>
using namespace std;
 
void solve();
 
int main() {
    int t = 1;
 
    cin >> t;
 
    while (t--) solve();
 
    return 0;
}

void solve() {
    int r = 0, n[2] = {}, p[2] = {};
    string s;

    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '0') n[0]++;
        else n[1]++;
    }

    r = min(n[0], n[1]);

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '0') {
            p[0]++;
            n[0]--;
        }
        else {
            p[1]++;
            n[1]--;
        }

        r = min(r, p[1] + n[0]);
        r = min(r, p[0] + n[1]);
    }

    cout << r << endl;
}