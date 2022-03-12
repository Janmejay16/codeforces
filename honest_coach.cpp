#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
#include <iostream>
 
using namespace std;
 
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int coach(vector<int> a, int n) {
    sort(a.begin(), a.end());
    int minDiff = a[n-1] - a[n-2];
    for(int i=1;i<n-1;i++) {
        minDiff = min(minDiff, a[i]-a[i-1]);
    }
    return minDiff;
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
        cout << coach(a, N) << endl;
    }
    return 0;
}