#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, r = 0;
    string s;

    cin >> n;

    cin >> s;

    for (int i = 1; i < n; i++) {
        if (s[i-1] == s[i]) r++;
    }

    cout << r << endl;

    return 0;
}