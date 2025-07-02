#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>> t;
	while(t--){
	    int n,e=0,o=0;
	    cin >> n;
	    
	    for(int i=1; i<=n; i++){
	        if(n%i==0 && i%2==0){
	            e++;
	        }else if (n%i==0 && i%2==1){
	            o++;
	        }
	    }
	    
	    cout << o << " " << e << endl;
	}
	
	return 0;

}
