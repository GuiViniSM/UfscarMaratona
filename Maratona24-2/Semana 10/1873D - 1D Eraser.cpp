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
    int n, k, x = 0;
    string s;

    cin >> n >> k >> s;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'B') {
            x++;

            if (i >= n - k) break;

            i += k - 1;
        }
    }

    cout << x << endl;
}