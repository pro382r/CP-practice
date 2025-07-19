#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int left_side = a + b - c;

    if (left_side == d) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
