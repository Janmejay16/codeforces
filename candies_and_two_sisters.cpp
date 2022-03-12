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
    long int n;
    cin >> n;
    for(int it=1;it<=n;it++) {
    //  Input
    long long int l;
    cin >> l;
    // Output
    if (l<3) cout << 0 << "\n";
    else cout << (l - (l/2) - 1) << "\n";
    }
    cout << endl; 
    return 0;
}