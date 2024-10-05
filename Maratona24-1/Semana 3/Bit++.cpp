#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x = 0;
    string op;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> op;

        if (op[1] == '+') x++;
        else x--;
    }

    cout << x << endl;

    return 0;
}