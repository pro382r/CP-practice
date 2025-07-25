//https://codeforces.com/problemset/problem/231/A

#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

int main()
{

    string input;
    int len,i,n;
    cin>> n;
    for(i=1; i<=n+1; i++){
    vector<string> words;
    getline(cin, input);
    
    len = input.length();
    if(len >10){
        cout << input[0] << len-2 << input[len-1] << "\n";
    }else{
        cout << input << "\n";
    }
    }
   
   return 0;
}
