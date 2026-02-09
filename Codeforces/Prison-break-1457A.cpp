#include <bits/stdc++.h>
using namespace std;

int main() {
    int T=1;
    cin>> T;

    while(T--)
    {
        int n, m, r, c;
        cin >> n>> m>> r>> c ;

        int x,y;

        if((n-r)>(r-1)){
            x = n-r;
        }else if ((n-r)<(r-1)){
            x = r-1;
        }else if ((n-r)==(r-1)){
            x = r-1;
        }

        if((m-c)>(c-1)){
            y = m-c;
        }else if ((m-c)<(c-1)){
            y = c-1;
        }else if ((m-c)==(c-1)){
            y = c-1;
        }
        
        cout << x+y << endl;
    }
    return 0;
}
