#include <bits/stdc++.h>
using namespace std;

int main() {
    int am, ae, bm, be;
    cin >> am >> ae >> bm >> be;
    if (am > bm) cout << "A";
    else if (am < bm) cout << "B";
    else cout << (ae > be ? "A" : "B");
    return 0;
}
