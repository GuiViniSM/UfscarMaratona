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
    int n, ind[2], distA = 0, distB = 0, distAB = 0, movs = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;

        cin >> x;

        if (x == 1) ind[0] = i;
        else if (x == n) ind[1] = i;
    }

    if (ind[0] > ind[1]) swap(ind[0], ind[1]);

    distA = min(ind[0] + 1, n - ind[0]);
    distB = min(ind[1] + 1, n - ind[1]);
    distAB = ind[1] - ind[0];

    if (distA < distB) {
        movs += distA;

        if (distAB < distB) movs += distAB;
        else movs += distB;
    }
    else {
        movs += distB;

        if (distA < distAB) movs += distA;
        else movs += distAB;
    }

    cout << movs << endl;
}