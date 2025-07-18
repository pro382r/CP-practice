//binary search algorithm

#include<bits/stdc++.h>
using namespace std;

int main(){

int h, l, m, n, i, j, k, x;

cin >> n;
vector<int>v1(n);

for(i=0; i<n; i++){
  cin >> v1[i];
}

cin >> k;
//sort(v1.begin(), v1.end());
l = 0;
h = n-1;
// m=l+(h-l)/2

while(l<=h){
m = (l + h)/2;
  if(v1[m]==k){
    break;
  }else if(v1[m]>k){
    h = m;
  }else {
    l = m;
  }
}

cout << m << endl;

return 0;
}
