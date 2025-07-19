#include <bits/stdc++.h>
using namespace std;

int main() {
    double p;
    int n,x;

    cin >> n >> x;
    p = ceil((double)n / x+90); // print p as integer but ceiling value.

    cout << p;
    return 0;
}
