#include <bits/stdc++.h>

using namespace std;

int main() {
    int i, j, m, mvs;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            cin >> m;

            if (m == 1) break;
        }

        if (m == 1) break;
    }

    mvs = abs(i - 2) + abs(j - 2);

    cout << mvs << endl;

    return 0;
}