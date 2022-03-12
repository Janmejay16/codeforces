#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
#include <iostream>
 
using namespace std;
 
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int calcMaxArea(int a, int b) {
    if(a>b) {
        swap(a,b);
    }
    return max(2*a,b)*max(2*a,b);
} 

int main() {
    fast_cin();
    int n;
    cin >> n;
    for(int i=0;i<n;i++) {
        int a, b;
        cin >> a >> b;
        cout << calcMaxArea(a, b) << endl;
    }
    return 0;
}