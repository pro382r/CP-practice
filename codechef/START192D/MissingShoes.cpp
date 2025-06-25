#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int L,R,n,m,p;
	
	cin >> L >> R;
	
	m = max(L,R);
	p = min(L,R);
	
	n = m-p;
	
	cout << n;

}
