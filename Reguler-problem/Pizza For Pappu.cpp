#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin>>a;

    if(a==4){
        cout << "Small pizza";
    }else if(a==6){
        cout << "Medium pizza";
    }else if(a==8){
        cout << "Large pizza with cold drink";
    }else cout << "Not Available";

    return 0;
}
