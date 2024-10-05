#include <bits/stdc++.h>

using namespace std;

int main() {
    int k, r, i = 1, t;

    cin >> k >> r;

    while (1) {
        t = k * i;

        if (t % 10 == 0 || (t - r) % 10 == 0) break;

        i++;
    }

    cout << i << endl;

    return 0;
}