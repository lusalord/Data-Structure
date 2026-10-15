#include <bits/stdc++.h>
using namespace std;

int main() {
    int a1, a2;
    char s1, s2;
    cin >> a1 >> s1 >> a2 >> s2;
    cout << ((a1 >= 19 && s1 == 'M') || (a2 >= 19 && s2 == 'M') ? 1 : 0);
    return 0;
}
