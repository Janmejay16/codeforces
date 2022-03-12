#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
#include <iostream>
 
using namespace std;
 
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int parity(int n, vector<int> v) {
    int odd=0;
    int even=0;
    for(int i=0;i<n;i++) {
        if(i%2==0 && v[i]%2==1) {
            even+=1;
        }
        if(i%2==1 && v[i]%2==0) {
            odd+=1;
        }
    }
    if(odd == even) {
        return even;
    }
    return -1;
}

int main() {
    fast_cin();
    int N;
    cin >> N;
    for(int i=0;i<N;i++) {
        int n;
        cin >> n;
        vector<int> v(n,0);
        for(int j=0;j<n;j++) {
            cin >> v[j];
        }
        cout << parity(n, v) << endl;
    }
    return 0;
}