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
    int n, x;
    long long aux0, aux1;
    multiset<long long> a;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;

        a.insert(x);
    }

    while(a.size() > 1) {
        aux0 = *a.begin();
        a.erase(a.begin());

        aux1 = *a.begin();
        a.erase(a.begin());

        a.insert((aux0 + aux1) / 2);
    }

    cout << *a.begin() << endl;
}