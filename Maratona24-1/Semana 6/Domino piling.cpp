#include <bits/stdc++.h>

using namespace std;

int main() {
    int m, n, qtd;

    cin >> m >> n;

    qtd = m * (n / 2);

    if (n % 2 != 0) qtd += m / 2;

    cout << qtd << endl;

    return 0;
}