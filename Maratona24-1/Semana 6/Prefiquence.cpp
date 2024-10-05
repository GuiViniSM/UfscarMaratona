#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, m, k;
    char a[200000], b[200000];

    cin >> t;

    for (int l = 0; l < t; l++) {
        cin >> n >> m >> a >> b;

        k = 0;

        for (int i = 0; i < m && k < n; i++) if (a[k] == b[i]) k++;

        cout << k << endl;
    }
}