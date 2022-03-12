#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
#include <iostream>
 
using namespace std;
 
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int spy(int N, vector<int> &a) {
    vector<int> num (2, 0);
    num[0] = a[0];
    int i=1;
    for(i=1;i<N;i++) {
        if(num[1] == 0) {
            if(a[i] != num[0]) {
                num[1] = a[i];
            }
        }
        else {
            if(a[i] == num[0]) {
                return i;
            }
            else {
                return 1;
            }
        }
    }
    return  i;
}

int main() {
    fast_cin();
    int n;
    cin >> n;
    for(int i=0;i<n;i++) {
        int N;
        cin >> N;
        vector<int> a(N,0);
        for(int j=0;j<N;j++) {
            cin >> a[j];
        }
        cout << spy(N, a) << endl;
    }
    return 0;
}