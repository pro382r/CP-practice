//https://codeforces.com/contest/2184/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T=1;
    cin >> T;

    while(T--)
    {
    int n,i,j=0,k, a=0;
    cin >> n;
    
    if(n>3){
        j = (n%2);
        cout<< j << endl;
    }else if (n<=3){
        j=n;
        cout<< j << endl;
    }

    }

    return 0;
}
