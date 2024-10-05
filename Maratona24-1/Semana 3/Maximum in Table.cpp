#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; 
    long long v = 1;

    cin >> n;

    for (int i = 2 * n - 2; i >= n; i--) {
        v *= i;
    }
    for (int i = 2; i < n; i++) {
        v /= i;
    }

    cout << v << endl;

    return 0;
}