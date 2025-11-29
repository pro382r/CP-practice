/*
  https://codeforces.com/contest/2158/problem/B
  
  runtime error...
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T=1;
    cin >> T;

    while(T--)
    {



    int i,j=0,n,N;

    cin>> n;
    N = 2*n;

    vector<int>A(N);

    for(i=0; i<N; i++) cin >> A[i];

    vector<int>p(n); vector<int>r(n);
    vector<int>q(n); vector<int>s(n);

    for(i=0; i<n; i++){
        p[i]=A[i];
        r[i]=A[i];
    }

    for(i=n; i<N; i++){
        q[i]=A[i];
        s[i]=A[i];
    }
    //---distinct---
    set<int> distinct_r(r.begin(), r.end());
    set<int> distinct_s(s.begin(), s.end());

    //---odd frequency---
    int b=0,c=0;
    for(auto i : r){
        for(auto j : p){
            if(r[i]==p[j]){
                b++;
            }
        }
        if(b%2==1){
            c++;
        }
        b=0;
    }


    int d=0,e=0;
    for(auto i : s){
        for(auto j : q){
            if(s[i]==q[j]){
                d++;
            }
        }
        if(d%2==1){
            e++;
        }
        d=0;
    }

    cout << c+e << endl;



    }

    return 0;
}
