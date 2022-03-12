#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
#include <iostream>
 
using namespace std;
 
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int sum(vector<int> v) {
    int sum=0;
    for(int i=0;i<v.size();i++) {
        sum += v[i];
    }
    return sum;
}

int swaps(int N, int k, vector<int> &a, vector<int> &b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for(int i=0;i<k;i++) {
        if(a[i] < b[N-1-i]) {
            a[i] = b[N-1-i];
        }
    }
    return sum(a);
}

int main() {
    fast_cin();
    int n;
    cin >> n;
    for(int i=0;i<n;i++) {
        int N, k;
        cin >> N >> k;
        vector<int> a(N,0);
        vector<int> b(N,0);
        for(int j=0;j<N;j++) {
            cin >> a[j];
        }
        for(int j=0;j<N;j++) {
            cin >> b[j];
        }
        cout << swaps(N, k, a, b) << endl;
    }
    return 0;
}