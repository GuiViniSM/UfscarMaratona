#include <bits/stdc++.h>

using namespace std;

int main() {
    int x[3];

    cin >> x[0] >> x[1] >> x[2];

    sort(x, end(x));

    cout << x[2] - x[0] << endl;

    return 0;
}