#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << a / b << ".";
    int r = a % b;
    for (int i = 0; i < 20; i++) {
        r *= 10;
        cout << r / b;
        r %= b;
    }
    return 0;
}
