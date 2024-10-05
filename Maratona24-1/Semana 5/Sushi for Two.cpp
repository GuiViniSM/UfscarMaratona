#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, t, count = 0, atual = 0, seq = 0, maxi = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> t;

        if (t == atual) count++;
        else {
            seq = count;
            count = 1;
            atual = t;
        }

        maxi = max(maxi, min(seq, count));
    }

    cout << 2 * maxi << endl;

    return 0;
}