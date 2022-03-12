#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
#include <iostream>
 
using namespace std;
 
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

long long calcMoves(vector<int> &a, vector<int> &b) {
    long long steps = 0;
    int ma = *min_element(a.begin(), a.end());
    int mb = *min_element(b.begin(), b.end());
    for(int i=0;i<a.size();i++) {
        if(a[i] > ma && b[i] > mb) {
            int diff = min(a[i]-ma, b[i]-mb);
            a[i] = a[i]- diff;
            b[i] = b[i]- diff;
            steps = steps + diff;
        }
        if(a[i] > ma) {
            steps = steps + a[i] - ma;
            a[i] = ma;
        }
        if(b[i] > mb) {
            steps = steps + b[i] - mb;
            b[i] = mb;
        }
    }
    return steps;
}

int main() {
    fast_cin();
    int n;
    cin >> n;
    for(int i=0;i<n;i++) {
        int N;
        cin >> N;
        vector<int> a(N,0);
        vector<int> b(N,0);
        for(int j=0;j<N;j++) {
            cin >> a[j];
        }
        for(int j=0;j<N;j++) {
            cin >> b[j];
        }
        cout << calcMoves(a, b) << endl;
    }
    return 0;
}