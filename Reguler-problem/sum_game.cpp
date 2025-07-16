#include <bits/stdc++.h>
using namespace std;

int main() {
 
 int a,i,j,k=0,m=0;
 cin>>a;
 vector<int>ar(a);
 for(i=0; i<a; i++){
    cin >> ar[i];
 }
 for(i=0; i<a; i++){
    if(ar[i]%2==0){
        k= k+ar[i];
    }else m=m+ar[i];
 }
    cout << k << " " << m << endl;
    return 0;
}
