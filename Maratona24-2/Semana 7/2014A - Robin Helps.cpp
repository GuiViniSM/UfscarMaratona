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
    int n, k, a[50], r = 0, g = 0;

    cin >> n >> k;

    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 0; i < n; i++) {
        if (a[i] >= k) r += a[i];
        else if (a[i] == 0 && r > 0) g++, r--;
    }

    cout << g << endl;
}