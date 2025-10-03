#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "1. Calculate Celcius. \n2. Calculate Farenheit. \n\nEnter one option: ";
    double C,F,k, a,b;
    int d, i, j;

    cin >> d;

    if (d==1){
        cout << "\nGive Ferenheit value: ";
        cin >> F;
        C = (F-32)/1.8;
        cout << "Result celcius = " << C << endl;
    }else if(d==2){
        cout << "\nGive Celcius value: ";
        cin >> C;
        F = C*1.8 + 32;
        cout << "Result celcius = " << F << endl;
    }else cout << "Enter only 1 or 2 for correct option" << endl;

    return 0;
}
