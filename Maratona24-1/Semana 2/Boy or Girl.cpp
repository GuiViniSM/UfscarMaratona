#include <bits/stdc++.h>

using namespace std;

int main() {
    string n;
    int l[26] = {0}, ct = 0;

    cin >> n;

    for (int i = 0; i < n.size(); i++) {
        if (l[n[i] - 'a'] == 0) ct++;

        l[n[i] - 'a']++;
    }

    if (ct % 2 == 0) cout << "CHAT WITH HER!" << endl;
    else cout << "IGNORE HIM!" << endl;

    return 0;
}