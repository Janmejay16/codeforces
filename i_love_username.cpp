#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
#include <iostream>
 
using namespace std;
 
typedef long long ll;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 

int main()
{
    fast_cin();
    int t;
    cin >> t;
    int min=10000;
    int max=0;
    int points=0;
    for(int it=0;it<t;it++) {
        int j;
        cin >> j;
        if (it==0) {
            max = j;
            min = j;
        }
        else{
            if (j>max) {
                points+=1;
                max = j;
            }
            if (j<min) {
                points+=1;
                min=j;
            }
        }
    }
    cout << points << endl;
    return 0;
}