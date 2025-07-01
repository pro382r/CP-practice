#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,t1;
    int x=0;
    string p;

    cin >> t;
    while(t--){
        cin >> p;
        if(p == "++x" || p == "x++" || p == "++X" || p == "X++"){
            x++;
        }else if(p == "--x" || p == "x--" || p == "--X" || p == "X--"){
            x--;
        }
    }
    cout << x;

    return 0;
}
