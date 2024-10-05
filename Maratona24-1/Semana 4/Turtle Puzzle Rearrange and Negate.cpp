#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, x, s = 0;

    cin >> t;

    for (int j = 0; j < t; j++) {
        s = 0;
        
        cin >> n;

        for (int i = 0; i < n; i++) {
            cin >> x;
            s += abs(x);
        }

        cout << s << endl;
    }

    return 0;
}