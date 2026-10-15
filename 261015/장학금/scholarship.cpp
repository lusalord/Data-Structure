#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int m = 0;
    if (a >= 90) {
        if (b >= 95) m = 100000;
        else if (b >= 90) m = 50000;
    }
    cout << m;
    return 0;
}
