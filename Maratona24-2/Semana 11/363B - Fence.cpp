#include <bits/stdc++.h>
using namespace std;
 
void solve();
 
int main() {
    int t = 1;
 
    // cin >> t;
 
    while (t--) solve();
 
    return 0;
}
 
void solve() {
    int n, k, h[150000], sum = 0, sumMin = 0, j = 1;

    cin >> n >> k;

    for (int i = 0; i < n; i++) cin >> h[i];

    for (int i = 0; i < k; i++) sum += h[i];

    sumMin = sum;

    for (int i = 1; i < n - k + 1; i++) {
        sum -= h[i - 1];
        sum += h[i + k - 1];

        if (sum < sumMin) {
            sumMin = sum;

            j = i + 1;
        }
    }

    cout << j << endl;
}