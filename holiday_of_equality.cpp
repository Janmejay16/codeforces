#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
#include <iostream>
 
using namespace std;
 
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int welfare(int n, vector<int> v) {
    if(n==1) {
        return 0;
    }
    sort(v.begin(), v.end());
    int maxW= v[n-1];
    int welfare = 0;
    for(int i=0;i<n-1;i++) {
        welfare+=(maxW-v[i]);
    }
    return welfare;
}

int main() {
    fast_cin();
    int n;
    cin >> n;
    vector<int> v(n,0);
    for (int i=0;i<n;i++) {
        cin >> v[i];
    }
    cout << welfare(n, v) << endl;
    return 0;
}