#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
#include <iostream>
 
using namespace std;
 
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int team(int n, int k, vector<int> v) {
    int teams = 0;
    for(int i=0;i<n;i++) {
        if(5 - v[i] >= k) {
            teams+=1;
        }
    }
    return (int)(teams/3);
}

int main() {
    fast_cin();
    int n,k;
    cin >> n >> k;
    vector<int> v(n,0);
    for (int i=0;i<n;i++) {
        cin >> v[i];
    }
    cout << team(n, k, v) << endl;
    return 0;
}