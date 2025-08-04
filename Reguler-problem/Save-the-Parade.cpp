// need fix WA
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1;
    cin >> s1;

    for (int i = 1; i < s1.size(); i++) {
        char c1 = tolower(s1[i-1]);
        char c2 = tolower(s1[i]);

        if (c1 > c2) {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
    return 0;
}
