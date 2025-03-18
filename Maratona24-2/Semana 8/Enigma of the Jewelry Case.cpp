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
    int n, k[50][50], r = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> k[i][j];
        }
    }

    if ((k[0][0] > k[0][n - 1]) && (k[0][0] < k[n - 1][0])) r = 1;
    else if ((k[0][0] > k[0][n - 1]) && (k[0][0] > k[n - 1][0])) r = 2;
    else if ((k[0][0] < k[0][n - 1]) && (k[0][0] > k[n - 1][0])) r = 3;

    cout << r << endl;
}