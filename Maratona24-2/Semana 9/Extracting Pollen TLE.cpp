#include <bits/stdc++.h>
using namespace std;

void solve();
int sumDigits(int n);

int memo_f[1000000] = {0};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;

    // cin >> t;

    while (t--) solve();

    return 0;
}

void solve() {
    int n, k, q;
    priority_queue<int> f;

    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        int temp;

        cin >> temp;

        f.push(temp);
    }

    for (int i = 0; i < k; i++) {
        int temp = f.top();

        f.pop();

        q = sumDigits(temp);

        if (q == 0) break;

        temp -= q;

        f.push(temp);
    }

    cout << q << endl;
}

int sumDigits(int n) {
    if (!memo_f[n] && n) {
        int sum = 0;
        int x = n;

        while (x) {
            sum += x % 10;
            x /= 10;
        }

        memo_f[n] = sum;
    }

    return memo_f[n];
}