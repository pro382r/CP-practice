/*
Problem: String matching.

Indian summer is such a beautiful time of the year! A girl named Alyona is walking in the forest and picking a bouquet from fallen leaves. Alyona is very choosy — she doesn't take a leaf if it matches the color and the species of the tree of one of the leaves she already has. Find out how many leaves Alyona has picked.

Input
The first line contains an integer n (1 ≤ n ≤ 100) — the number of leaves Alyona has found. The next n lines contain the leaves' descriptions. Each leaf is characterized by the species of the tree it has fallen from and by the color. The species of the trees and colors are given in names, consisting of no more than 10 lowercase Latin letters. A name can not be an empty string. The species of a tree and the color are given in each line separated by a space.

Output
Output the single number — the number of Alyona's leaves.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int i,j, k=0, n;

    cin >> n;
    n=n*2;
    string s1[n];

    for(i=0; i<n; i++){
        cin >> s1[i];
    }

    vector<int>a1;
    
    int N = n/2, p=0;
    for(i=0; i<n; i+=2){
        for(j=i+2; j<n; j+=2){
            if(s1[i]==s1[j] && s1[i+1]==s1[j+1]){
                k++;
                a1.push_back(i);
            }else p++;
        }
    }
    //cout << k << endl;
    a1.erase(unique(a1.begin(), a1.end()), a1.end());
    cout << N-a1.size();
    return 0;
}
