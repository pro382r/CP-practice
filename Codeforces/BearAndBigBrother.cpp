#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,i,j=0,k=0,l=0;

    cin >> a >> b;
    k=a; l=b;
    for(i=0; ; i++)
    {
        k = k * 3;
        l = l * 2;

        if(k>l){
            break;
        }else j++;
    }

    cout << j+1 << endl;
    return 0;
}