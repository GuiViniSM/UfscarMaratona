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
    int n, k, x = 0, minimum = 0;
    string s;

    cin >> n >> k >> s;

    for (int i = 0; i < k; i++) {
        if (s[i] == 'W') x++;
    }

    minimum = x;

    for (int i = k; i < n; i++) {
        if (s[i] == 'W' && s[i - k] == 'B') x++;
        else if (s[i] == 'B' && s[i - k] == 'W') x--;

        minimum = min(minimum, x);
    }

    cout << minimum << endl;
}