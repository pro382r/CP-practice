//pethagorus
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b, c;
    cin>>a >>b >>c ;

    if(a>b && a>c && a*a==(b*b+c*c)){
        cout << "YES" << endl << a*a << endl;
    }else if(b>a && b>c && b*b==(c*c+a*a)){
        cout << "YES"<< endl << b*b<< endl;
    }else if(c>a && c>b && c*c==(b*b+a*a)){
        cout << "YES"<< endl << c*c << endl;
    }else cout << "NO";
    return 0;
}
