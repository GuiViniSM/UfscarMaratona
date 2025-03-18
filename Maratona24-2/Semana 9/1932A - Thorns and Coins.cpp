#include <bits/stdc++.h>
using namespace std;

void solve();

int main() {
    int t = 1;

    cin >> t;

    while (t--) solve();

    return 0;
}

void solve() {
    int n, gold = 0;
    string path;

    cin >> n >> path;

    for (int i = 0; i < n; i++) {
        if (path[i] == '@') gold++;
        else if (path[i] == '*' && path[i + 1] == '*') break;
    }

    cout << gold << endl;
}