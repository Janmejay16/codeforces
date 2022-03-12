#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
#include <iostream>
 
using namespace std;
 
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int calcKthNum(int k) {
    if(k<3) {
        return k;
    }
    vector<int> v(k,0);
    int i=1;
    int count=0;
    while(count < k) {
        if(i%3 == 0 || i%10==3) {
            i++;
        }
        else {
            v[count] = i;
            i++;
            count++;
        }
    }
    return v[k-1];
}

int main() {
    fast_cin();
    int n;
    cin >> n;
    for(int i=0;i<n;i++) {
        int k;
        cin >> k;
        cout << calcKthNum(k) << endl;
    }
    return 0;
}