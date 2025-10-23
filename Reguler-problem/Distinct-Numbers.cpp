/*
Count Distinct Numbers:
You are given a list of integers. Your task is to find out how many distinct (unique) numbers are in the list.

Input
The first line contains a single integer n — the total number of integers in the list.

The second line contains n integers, separated by spaces: x₁, x₂, ..., xₙ.

Output
Print a single integer: the number of distinct values in the list.
*/


#include <bits/stdc++.h>
using namespace std;

int main() {
    int i,j, k=0, n;

    cin >> n;
    vector<int>a1(n);

    for(i=0; i<n; i++){
        cin >> a1[i];
    }
    sort(a1.begin(), a1.end()); 
    a1.erase(unique(a1.begin(), a1.end()), a1.end());
    cout << a1.size();
    return 0;
}
