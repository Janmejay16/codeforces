#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
#include <iostream>
 
using namespace std;
 
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void printVector(vector<int> r) {
    for(int v:r) {
        cout << v << " ";
    }
    cout << endl;
}

void balancedArr(vector<int> v) {
    for(int a: v) {
        if((a/2)%2==1) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
            vector<int> r (a,0);
            for(int even=1;even<=a/2;even++) {
                r[even-1] = even*2;
            }

            int odd=0;
            for(int i=a/2;i<3*(a/4);i++) {
                r[i] = (odd*2)+1;
                odd++;
            }
            odd=r[a/2-1] + 1;
            for(int i=a-1;i>=3*(a/4);i--) {
                r[i] = odd;
                odd-=2;
            }
            printVector(r);
        }
    }
}


int main() {
    fast_cin();
    int n=5;
    cin >> n;
    vector<int> v (n,0);
    for(int i=0;i<n;i++) {
        int k;
        cin >> k;
        v[i] = k;
    }
    balancedArr(v);
    return 0;
}