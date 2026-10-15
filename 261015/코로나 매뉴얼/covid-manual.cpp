#include <bits/stdc++.h>
using namespace std;

int main() {
    int cnt = 0;
    for (int i = 0; i < 3; i++) {
        char s;
        int t;
        cin >> s >> t;
        if (s == 'Y' && t >= 37) cnt++;
    }
    cout << (cnt >= 2 ? "E" : "N");
    return 0;
}
