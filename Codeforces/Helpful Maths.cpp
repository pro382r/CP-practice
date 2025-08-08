//https://codeforces.com/contest/339/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    string s1;
    
    cin >> s1;
    vector<int>v1;
    
    for(int i=0; i<s1.size(); i++){
        if(s1[i]=='+'){
            continue;
        }else {
            char d = s1[i];
            a = d - '0';
            v1.push_back(a);
        }
    }
    
    sort(v1.begin(), v1.end());
//cout<< v1.size() << endl;
    for(int i=0; i<v1.size(); i++){
        cout << v1[i];
        if(i == v1.size()-1){
            cout << " ";
        }else if(i < v1.size()-1){
            cout << "+";
        }
    }

    return 0;
}
