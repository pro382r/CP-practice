//https://codeforces.com/contest/2158/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T=1;
    cin >> T;

    while(T--)
    {
    int i,j=0,n,y,r;

    cin>> n >> y >> r;

    j = (y/2)+r; //cout<<"n= "<< n <<"\n";

    if (n<=j){
       cout << n << endl;
    }else cout << j << endl;

    }

    return 0;
}
