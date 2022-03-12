#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
#include <iostream>
 
using namespace std;
 
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int boring(int k) {
    int level = k%10;
    int length = to_string(k).length();
    int total = 0;
    for(int i=1;i<level;i++) {
        total+=10;
    }
    for(int i=1;i<=length;i++) {
        total+=i;
    }
    return total;
}

int main() {
    fast_cin();
    int n;
    cin >> n;
    for(int i=0;i<n;i++) {
        int k;
        cin >> k;
        cout << boring(k) << endl;
    }
    return 0;
}