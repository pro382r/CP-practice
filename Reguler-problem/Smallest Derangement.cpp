//wrong

#include <bits/stdc++.h>
using namespace std;

int main() {
	int i, j, k, j1=0, k1=0, k2;
	cin >> k;
	double J;
	
	k2=k;

    j=k/2;
    for(i=1; i<=k; i++)
    {
        if(j>0)
        {
            //j1=j1+j;
            cout << j << " ";
            j--;
        }else {
            cout << k2 << " ";
            k2--;
        }
    }
	
	return 0;

}
