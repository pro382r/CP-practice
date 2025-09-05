#include <bits/stdc++.h>
#include <cctype>
using namespace std;

int main() {
    int i,j,k;
    string s1;
    cin>>s1;
    int n, up=0, low=0;
    n= s1.size();

    for(i = 0; i < n; i++){
        char c=s1[i];
        if(isupper(c)){
            up++;
        }else if(islower(c)){
            low++;
        }
    }

    if(up>low){
        transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
    }else {
        transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    }

    cout << s1;

    return 0;
}
