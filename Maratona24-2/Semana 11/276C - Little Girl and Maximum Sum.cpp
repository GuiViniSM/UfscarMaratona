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
    long long n, q, l, r, sum = 0, a[200000] = {}, diff[200000] = {}, idx[200000] = {};

    cin >> n >> q;
    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 0; i < q; i++) {
        cin >> l >> r;

        diff[l - 1]++;
        if (r < n) diff[r]--;
    }

    idx[0] = diff[0];
    for (int i = 1; i < n; i++) idx[i] = idx[i - 1] + diff[i];

    sort(a, a + n);
    sort(idx, idx + n);

    for (int i = n - 1; i >= 0; i--) {
        if (!idx[i]) break;

        sum += a[i] * idx[i];
    }

    cout << sum << endl;
}