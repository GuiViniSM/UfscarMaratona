#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, a[101], s;

    cin >> t;

    for (int k = 0; k < t; k++) {
        s = 0;

        cin >> n;

        for (int i = 0; i < 2 * n; i++) {
            cin >> a[i];
        }

        sort (a, a + 2 * n);

        for (int i = 0; i < 2 * n; i += 2) {
            s += a[i];
        }

        cout << s << endl;
    } 

    return 0;
}