#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
#include <iostream>
 
using namespace std;
 
typedef long long ll;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 

int main()
{
    fast_cin();
    ll n, a, c=0, u=0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a;
        if(a < 0){
            if(!(c>=1))u++;
            else c--;
        }
        else c+=a;
    }
    cout << u << endl;
    return 0;
}