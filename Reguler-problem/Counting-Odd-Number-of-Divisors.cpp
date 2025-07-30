//Given an integer L and R, your task is to find how many integers between L and R (inclusive) have an odd number of divisors.

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int L, R, p, q;
    cin >> L >> R;
    p = sqrt(R);
    q = sqrt(L-1);
    
    cout << p-q << endl;
    
    return 0;
}
