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
    int n, m, type, l, r, v[100000], u[100000];
    long long sumv[100000], sumu[100000];

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        u[i] = v[i];
    }
    cin >> m;

    sort(u, u + n);

    sumv[0] = v[0];
    for (int i = 1; i < n; i++) sumv[i] = sumv[i - 1] + v[i];
    sumu[0] = u[0];
    for (int i = 1; i < n; i++) sumu[i] = sumu[i - 1] + u[i];

    for (int i = 0; i < m; i++) {
        cin >> type >> l >> r;

        if (type == 1) {
            if (l == 1) cout << sumv[r - 1] << endl;
            else cout << sumv[r - 1] - sumv[l - 2] << endl;
        }  
        else {
            if (l == 1) cout << sumu[r - 1] << endl;
            else cout << sumu[r - 1] - sumu[l - 2] << endl;
        } 
    }
}