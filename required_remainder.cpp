#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
#include <iostream>
 
using namespace std;
 
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int remain(int x, int y, int n) {
    if(x>n && y==0) {
        return 0;
    }
    int maxN = n/x;
    if(maxN*x + y <= n) {
        return maxN*x+y;
    }
    if(maxN*x + y > n) {
        return (maxN-1)*x+y;
    }
    return 0;
}

int main() {
    fast_cin();
    int N;
    cin >> N;
    for(int i=0;i<N;i++) {
        int x, y, n;
        cin >> x >> y >> n;
        cout << remain(x, y, n) << endl;
    }
    return 0;
}