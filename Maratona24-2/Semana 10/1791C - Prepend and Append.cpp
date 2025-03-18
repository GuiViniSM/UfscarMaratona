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
    int n, flag = 1;
    string s;

    cin >> n >> s;

    while (s.size() > 1) {
        if (s[0] == s[s.size() - 1]) break;

        s.pop_back();
        s.erase(s.begin());
    }

    cout << s.size() << endl;
}