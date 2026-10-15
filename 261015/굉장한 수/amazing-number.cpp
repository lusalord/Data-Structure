#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool ok = (n % 2 == 1 && n % 3 == 0) || (n % 2 == 0 && n % 5 == 0);
    cout << (ok ? "true" : "false");
    return 0;
}
