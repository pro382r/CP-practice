//Megatron vs Optimus Prime

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--)
    {
        int i, A, B, a=0, b=0, k;

        cin >> A >> B;

        a = A;
        b = B;

        int m;

        m = max(A,B);

        for(i=0; i<m; i++)
        {
            if(a%2==0 && k == 0)
            {
                a = a/2;

            }else if(a%2!=0 && k == 0)
            {
                a = a - 1;
            }
            k = 1;

            if(b%2==0 && k == 1)
            {
                b = b/2;

            }else if(b%2!=0 && k == 1)
            {
                b = b - 1;
            }
            k = 0;

            if(a==0){
                cout << "Optimus Prime" << endl;
                break;
            }else if (b==0){
                cout << "Megatron" << endl;
                break;
            }
        }

    }

    return 0;
}
