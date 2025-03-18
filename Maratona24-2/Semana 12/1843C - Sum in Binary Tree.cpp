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
    long long n, r = 0;

    cin >> n;

    for (n; n > 0; n /= 2) r += n;

    cout << r << endl;
}