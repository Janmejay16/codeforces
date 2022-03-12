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
    ll t;
    cin >> t;
    ll count=0;
    if (t/100 > 0) {
        count+=(t/100);
        t=t%100;
    }
    // 20
    if (t/20 > 0) {
        count+=(t/20);
        t=t%20;
    }
    // 10
    if (t/10 > 0) {
        count+=(t/10);
        t=t%10;
    }
    // 5
    if (t/5 > 0) {
        count+=(t/5);
        t=t%5;
    }
    if(t<5) {
        count+=t;
        // t=t%1;
    }
    cout << count << endl;
    return 0;
}