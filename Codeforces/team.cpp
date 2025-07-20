//https://codeforces.com/contest/231/problem/A

#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main()
{
    int t,k,p=0,q;
    cin>> t;
    while(t--){
        k=0;
    int arr[3];
    int i;
    for ( i = 0; i < 3; ++i) {
        cin >> arr[i];
        if(arr[i] == 1){
        k++;
       }
     }
        if(k > 1){
            p++;
        }
    }

    cout << p;
    return 0;
}
