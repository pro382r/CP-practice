//https://codeforces.com/problemset/problem/158/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, n, k=0, k1;
    cin >> a >> n;
    vector<int>v1(a);

    for(int i=0; i<a; i++){
        cin >> v1[i];
    }

    sort(v1.begin(), v1.end(), greater<int>());

k1 = v1[n-1];
    for(int i=0; i<a; i++){
        if(v1[i]>=k1 && v1[i]>0){
            k++;
        }
    }


cout << k;
    return 0;
}
