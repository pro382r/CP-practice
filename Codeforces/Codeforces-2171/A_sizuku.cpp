//solve with basix templete

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T=1;
    cin >> T;

    while(T--)
    {
    int i,j,n,x;
    double y;

    cin>> n;

    if (n%2==0){
       y=(n-2*x)/4;
       cout << y+1 << endl;
    }else cout << 0 << endl;

    }

    return 0;
}
