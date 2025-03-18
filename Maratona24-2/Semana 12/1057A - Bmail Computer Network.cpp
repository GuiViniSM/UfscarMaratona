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
    int n, p[200000], c[200000] = {};

    cin >> n;
    for (int i = 0; i < n - 1; i++) cin >> p[i];

    int j = n - 2, i = 1;
    c[0] = n;
    while (1) {
        c[i] = p[j]; 
        i++;

        if (c[i - 1] == 1) break;

        j = p[j] - 2;
    }

    sort(c, c + i);

    for (int k = 0; k < i; k++) cout << c[k] << " ";
    cout << endl;
}