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
    int n, a[40];

    cin >> n;

    a[0] = 1;
    a[1] = 1;

    for (int i = 2; i <= n; i++) {
        a[i] = a[i - 1] + a[i - 2];
    }

    cout << a[n] << endl;
}