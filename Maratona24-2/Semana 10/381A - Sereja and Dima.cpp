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
    int n, s = 0, d = 0;
    vector<int> c;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int temp;

        cin >> temp;

        c.push_back(temp);
    }

    for (int i = 0; i < n; i++) {
        int temp;

        if (c[0] > c[c.size() - 1]) {
            temp = c[0];
        
            c.erase(c.begin());
        }
        else {
            temp = c[c.size() - 1];
            
            c.pop_back();
        }

        if (i % 2) d += temp; 
        else s += temp;
    }

    cout << s << " " << d << endl;
}