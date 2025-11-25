#include "bits/stdc++.h"
using namespace std;
using ll = long long;
#define pb push_back

void solve(){
    int a,b,c, i, d=0;

    cin >> a>> b>> c;

    for(i=a; i<=b; i++)
    {
        if(c%i==0){
            d++;
        }
    }

    cout << d << endl;
}
 
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  
    int T = 1;
    // cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
