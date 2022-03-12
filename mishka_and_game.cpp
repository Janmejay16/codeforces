#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
#include <iostream>
 
using namespace std;
 
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

string mishka(vector<vector<int>> v, int N) {
    int m=0;
    int c=0;
    for(int i=0;i<N;i++) {
        if(v[i][0] > v[i][1]) {
            m+=1;
        }
        if(v[i][0] < v[i][1]) {
            c+=1;
        }
    }
    if(m>c) {
        return "Mishka";
    }
    if(m<c) {
        return "Chris";
    }
    return "Friendship is magic!^^";
}

int main() {
    fast_cin();
    int N;
    cin >> N;
    vector<vector<int>> v(N,vector<int>(2,0));
    for(int i=0;i<N;i++) {
        cin >> v[i][0] >> v[i][1];
    }
    cout << mishka(v, N) << endl;
    return 0;
}