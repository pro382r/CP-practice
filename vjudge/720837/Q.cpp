#include<algorithm>
#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){
int t;
cin>>t;

while (t--){
  int n=0,i,k=0,P,M,j=0;
  cin>> P >> M;
  vector<int>pl(P);

  for(i=0; i<P; i++){
    cin >> pl[i];
  }
  sort(pl.begin(), pl.end());

  for(i=0; i<P; i++){
  k = k + pl[i];
    if ( k < M || k == M ){
        n = k;
        j++;
      //break;
    }else if (pl[0]>M){
        n = M;
    }
  }

cout << n << " " << j << "\n";
  }

  return 0;
}
