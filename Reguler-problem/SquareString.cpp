//https://codeforces.com/problemset/problem/1619/A
// not 100%

#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>> t;

  while(t--){
    int i,j,k;

    string as, b1, b2;
    cin >> as;

    int n = as.size();

    //b1.clear(); b2.clear();
    
    if(n%2==1)
    {
        cout << "NO" << endl;
    }else if(n%2==0)
    {
        k = n/2;

        for(i=0; i<k; i++)
        {
            b1 += as[i];
        }

        for(i=k; i<n; i++)
        {
            b2 += as[i];
        }

        if(b1 == b2){
            cout << "YES" << endl;
        }else cout << "NO" << endl;

        
    }
  }
    return 0;
}
