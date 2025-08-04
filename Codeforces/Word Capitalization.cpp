//https://codeforces.com/contest/281/problem/A

#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main() {
    string w;
    cin >> w;
    
    if (!w.empty()) {
        w[0] = toupper(w[0]);
    }
    
    cout << w << endl;
    
    return 0;
}
