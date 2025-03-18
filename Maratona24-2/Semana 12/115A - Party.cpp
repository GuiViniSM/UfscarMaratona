#include <bits/stdc++.h>
using namespace std;
 
void solve();
 
int main() {
    int t = 1;
 
    // cin >> t;
 
    while (t--) solve();
 
    return 0;
}
 
void solve() {
    int n, p[2000], r = 1;

    cin >> n;
    for (int i = 0; i < n; i++) cin >> p[i];

    for (int i = 0; i < n; i++) {
        int g = 1, j = i;

        while (p[j] != -1) {
            g++;

            j = p[j] - 1;
        }

        r = max(r, g);
    }

    cout << r << endl;
}