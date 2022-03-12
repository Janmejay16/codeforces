#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
#include <iostream>
#include <cmath>
 
using namespace std;
 
typedef long long ll;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 

int main()
{
    fast_cin();
    ll t;
    cin >> t;
    for(int it=1;it<=t;it++) {
        ll a,b;
        int c=0;
        cin >> a >> b;
        if (a>b) {
            if (a%10 > b%10) {
                c+=1;
            }
            c += (ceil(a/10) - ceil(b/10));
        }
        else {
            if (a%10 < b%10) {
                c+=1;
            }
            c += (ceil(b/10) - ceil(a/10));
        }
        cout << c << "\n";
    }
    return 0;
}