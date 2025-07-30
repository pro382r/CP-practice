//You are given two mathematical equations. You will also be given a value of ﻿﻿﻿﻿﻿﻿﻿﻿﻿ 𝑥 x﻿﻿﻿﻿﻿﻿﻿﻿﻿. Your task is to find the value of ﻿﻿﻿﻿﻿﻿﻿﻿﻿ 𝑦 y﻿﻿﻿﻿﻿﻿﻿﻿﻿ using one of the two equations based on the value of x: If ﻿﻿﻿﻿﻿﻿﻿﻿﻿ 𝑥 is greater than or equal to 0, use the first equation to calculate and print the value of 𝑦. If 𝑥 is less than 0, use the second equation to calculate and print the value of 𝑦﻿﻿﻿﻿﻿﻿﻿﻿﻿. Equations: First equation (when x ≥ 0): ﻿﻿﻿﻿﻿﻿﻿﻿﻿ 6 𝑥 − 2 𝑦 + 8 = 0 6x−2y+8=0﻿﻿﻿﻿﻿﻿﻿﻿﻿ Second equation (when x < 0): ﻿﻿﻿﻿﻿﻿﻿﻿ 𝑥 2 + 2 𝑥 + 𝑦 = − 12 x 2 +2x+y= −12﻿﻿﻿﻿.

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
    int x,y;
    cin>> x;

    if(x>=0){
        y = 3*x+4;
    }else {
        y = -12-x*x-2*x;
    }

    cout << y << endl;;
    }
    return 0;
}
