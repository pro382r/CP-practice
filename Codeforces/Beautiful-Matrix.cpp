//https://codeforces.com/problemset/problem/263/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, i, j, k=0, k2=0, a, b;
    vector<int>ar(5);

    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            cin >> ar[j];
            if( ar[j]==1 ){
                k= i+1;
                k2=j+1;
            }
        }
    }

    if(k==3){
        a=0;
    }else if(k>3){
        a= k-3;
    }else {
        a = 3-k;
    }

    if(k2==3){
        b=0;
    }else if(k2>3){
        b= k2-3;
    }else {
        b = 3-k2;
    }

    cout << a+b;

    return 0;
}
