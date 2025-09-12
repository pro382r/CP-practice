//https://vjudge.net/contest/744989#problem/Y

#include <bits/stdc++.h>
using namespace std;

int main() {
    int i, j, k, n, m, a=0, b, c, d;
    cin >> n ;
    vector<int>a1(n);

    for(i=0; i<n; i++){
        cin>> a1[i];
    }
    cin>> b;
    set<int> dis;

    for(i=0; i<b; i++){
        cin >> c >> d;
        dis.clear();
        for(j=c-1; j<d; j++){
            dis.insert(a1[j]);
        }
        cout << dis.size() << endl ;
    }

    return 0;
}
