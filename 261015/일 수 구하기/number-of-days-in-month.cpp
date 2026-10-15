#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cout << days[n];
    return 0;
}
