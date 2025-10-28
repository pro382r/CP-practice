//https://codeforces.com/contest/2167/problem/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>> T;

    while(T--){
    int a,b;

    string s,t;

    cin>> a>> s>> t;
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    if(s==t)
    {
        cout << "YES" << endl;
    }else cout << "NO" << endl;

    }
    return 0;
}
