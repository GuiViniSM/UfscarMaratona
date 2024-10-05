#include <bits/stdc++.h>

#define MAX 300000

using namespace std;

int main() {
    int t, n, k, q, qi, a[MAX];

    cin >> t;

    for (int l = 0; l < t; l++) {
        q = 0;
        qi = 1;

        cin >> n >> k;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort (a, a + n);

        for (int i = 0; i < n - 1; i++) {
            if (a[i + 1] - a[i] <= k) {
                qi++;

                if ((i + 1 == n - 1) && (q < qi)) q = qi;
            }
            else {
                if (q < qi) q = qi;
                
                qi = 1;
            }
        }

        if (n == 1) q = 1;

        cout << n - q << endl;
    }

    return 0;
}