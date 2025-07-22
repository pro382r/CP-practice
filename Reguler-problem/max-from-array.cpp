#include <bits/stdc++.h>
using namespace std;

int main() {
int i,j,k=0,n;

cin >> n;
vector<int>a1(n);

for(i=0; i<n; i++){
    cin >> a1[i];
    if(k<=a1[i]){
        k = max(k,a1[i]);
    }

    if(k==a1[i]) j=i;
}

cout << j;

    return 0;
}
