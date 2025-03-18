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
    int p[3], draws = 0;

    for (int i = 0; i < 3; i++) cin >> p[i];

    if ((p[0] + p[1] + p[2]) % 2) {
        cout << -1 << endl;
    
        return;
    }

    for (int i = 0; i < 2; i++) {
        while (p[i]) {
            draws++;

            p[i]--;
            p[2]--;

            sort(p, end(p));
        }
    }

    cout << draws << endl;
}