//contest

#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;

while(t--){
int h, l, m, n, i, j=0, k, x;

cin >> n;

for(i=10; i<n*10; i=i*10){
    k=n%i;
    k = k/(i/10);
    j=j+k;

}

cout << j;
}

return 0;
}
