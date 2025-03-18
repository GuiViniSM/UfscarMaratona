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
    int n, x, op = 0;
    long long odd = 0;
    vector<int> a;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;

        if (x % 2 == 1 && x > odd) odd = x;
        else if (x % 2 == 0) a.push_back(x);
    }

    if (a.size() == n) {
        cout << "0" << endl;

        return;
    }

    sort(a.begin(), a.end());

    op = a.size();

    for (int i = 0; i < a.size(); i++) {
        if (odd > a.back()) break;
        else if (odd < a[i]) {
            op++;
            break;
        }
        else odd += a[i];
    }

    cout << op << endl;
}