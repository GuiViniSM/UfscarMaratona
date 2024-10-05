#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, a, par, imp;

    cin >> t;

    for (int l = 0; l < t; l++) {
        cin >> n;

        par = imp = 0;

        for (int i = 0; i < n; i++) {
            cin >> a;

            if (i % 2 == 0 && a % 2 != 0) par++;
            else if (i % 2 != 0 && a % 2 == 0) imp++;
        }

        if (par == imp) cout << par << endl;
        else cout << "-1" << endl;
    }

    return 0;
}