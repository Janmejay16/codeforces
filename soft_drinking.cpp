#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
#include <iostream>
 
using namespace std;
 
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int calcToasts(int n, int k, int l, int c, int d, int p, int nl, int np) {
    int amount = (k*l)/nl;
    int slices = c*d;
    int salt = p/np;
    return (
        min(
            amount,
            min(slices, salt)
        )
    )/n;
}

int main() {
    fast_cin();
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    cout << calcToasts(n, k, l, c, d, p, nl, np) << endl;
    return 0;
}