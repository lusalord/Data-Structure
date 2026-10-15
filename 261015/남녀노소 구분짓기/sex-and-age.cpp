#include <bits/stdc++.h>
using namespace std;

int main() {
    int g, age;
    cin >> g >> age;
    if (g == 0) cout << (age >= 19 ? "MAN" : "BOY");
    else cout << (age >= 19 ? "WOMAN" : "GIRL");
    return 0;
}
