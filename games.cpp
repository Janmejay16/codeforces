#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
#include <iostream>
 
using namespace std;

#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main()
{
    fast_cin();
    int t;
    cin >> t;
    int h[t];
    int g[t];
    for(int i=0;i<t;i++) {
        cin >> h[i] >> g[i];
    }
    int c = 0;
    for(int i=0;i<t;i++) {
        for(int j=0;j<t;j++) {
            if (g[j] == h[i] && j!=i) {
                c+=1;
            }
        }
    }
    cout << c << endl;
    return 0;
}