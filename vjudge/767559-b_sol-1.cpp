#include "bits/stdc++.h"
using namespace std;
using ll = long long;
#define pb push_back

void solve(){
    int i,j,k,n,x,a,b,c,C=0, sum, sm=0;
    
    cin >> n>> k >> x>> a>> b>> c;

    vector<int>ar(n);

    ar[0] = x;
    int p=x;

    for(i=1; i<n; i++)
    {
        p = (a*p+b)%c;
        ar[i] = p;
    }
    int kp = k;
    for(i=0; i<=n-k; i++)
        {
            for(j=C; j<kp; j++){
                sum = sum+ar[j]; //cout<< sum<<"  ";
             }
            C++;
            kp++;
            sm = sm ^ sum;
            sum=0;
        }

    cout << sm << endl;

}
 
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  
    int T = 1;
    //cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
