#include <bits/stdc++.h>
using namespace std;

int main() {
int i,j,k=0,n,a,b,c;

cin >> a>>b >>c ;

i=pow(2, a);
j=pow(2, b);
k=pow(2, c);

n=(i-j)/k;

cout << n;

    return 0;
}
