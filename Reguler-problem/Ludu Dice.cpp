#include <bits/stdc++.h>
using namespace std;

int main() {
    int X;
    cin >> X;

    double p = 0.0; //probability

    if (X <= 1) {
        p = 1.0;
    } else if (X > 6) {
        p = 0.0;
    } else {
        p = (6 - X + 1) / 6.0;
    }

    cout << fixed << setprecision(6) << p << "\n";
    return 0;
}
