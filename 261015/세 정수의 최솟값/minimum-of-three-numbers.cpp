#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int m = a < b ? (a < c ? a : c) : (b < c ? b : c);
    cout << m;
    return 0;
}
