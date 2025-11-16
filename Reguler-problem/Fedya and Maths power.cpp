//https://codeforces.com/contest/456/problem/B
// not yet correct

#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n, a, b;
	cin >> n;
	
	a = 1+pow(2,n)+pow(3,n)+pow(4,n);
	b = a % 5;
	cout << b << endl;
	
	return 0;
}
