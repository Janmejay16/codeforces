#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
#include <iostream>
#include <vector>
 
using namespace std;
 
typedef long long ll;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 

int main()
{
    fast_cin();
    vector<int> v;
    ll a,b,c;
    // Store input in vector
    for(int it=0;it<4;it++) {
        ll i;
        cin >> i;
        v.push_back(i);
    }
    // Sort the vector
    sort(v.begin(), v.end());
    // Calculate a,b,c
    // a+b = w;
    // b+c = x;
    // a+c = y;
    // a+b+c = z;    b=z-y
    b = v[3] - v[2];
    a = v[0] - b;
    c = v[1] - b;
    cout << a << " " << b << " " << c << endl; 

    return 0;
}