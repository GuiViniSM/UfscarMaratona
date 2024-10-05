#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, k, q, a[100], n[100];

    cin >> t;

    for (int l = 0; l < t; l++) {
        cin >> k >> q;

        for (int i = 0; i < k; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < q; i++) {
            cin >> n[i];
        }

        for (int i = 0; i < q; i++) {
            if (a[0] <= n[i]) cout << a[0] - 1 << " ";
            else cout << n[i] << " ";
        }

        cout << endl;
    }

    return 0;
}