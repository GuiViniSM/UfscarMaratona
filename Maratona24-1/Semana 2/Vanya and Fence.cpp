#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, h, x, w = 0;
    
    cin >> n >> h;

    for (int i = 0; i < n; i++) {
        cin >> x;

        if (x > h) w += 2;
        else w++;
    }

    cout << w << endl;

    return 0;
}