//https://codeforces.com/contest/236/problem/A

#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
    string u;
    cin >> u;
    
    set<char> distinctChars;
    
    for (char c : u) {
        distinctChars.insert(c);
    }
    
    if (distinctChars.size() % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }
    
    return 0;
}
