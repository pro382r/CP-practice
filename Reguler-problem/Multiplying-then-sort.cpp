#include <bits/stdc++.h>
using namespace std;

int main() {
	int i, j, k=0, n;
	cin >> n;
	
	vector<int>v1(n);
	
	for(i=0; i<n; i++)
	{
	    cin >> v1[i];
	}
	
	sort(v1.begin(), v1.end());
	
	for(i=0; i<n-1; i++)
	{
	    if(v1[i+1]%v1[i]==0)
	    {
            k++;
	        continue;
	    }else{
	        cout << "-1";
	        break;
	    }
	}
    //cout << k << " " << i << endl;
	
	if(i==k)
	{
	    for(i=0; i<n; i++)
	    {
	        cout << v1[i] << " ";
	    }
	}
	
	return 0;

}
