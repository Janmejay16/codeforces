#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
#include <iostream>
#include <map>
 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main()
{
    fast_cin();
    int n;
    cin >> n;
    map<string,int> m = {
        {"Tetrahedron",4},
        {"Cube",6},
        {"Octahedron",8},
        {"Dodecahedron",12},
        {"Icosahedron",20},
    };
    int sum = 0;
    for(int it=1;it<=n;it++) {
     string s;
     cin >> s;
     auto i = m.find(s);
     sum += i->second;
    }
    cout << sum << endl; 
    return 0;
}