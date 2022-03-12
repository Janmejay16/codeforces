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
    ll t;
    cin >> t;
    for(int it=4;it<t-2;it++) {
        int a = 0;
        int b = 0;
        for (int i=2;i<it;i++) {
            if (it%i==0) {
                a=1;
                break;
            }
            else {
                a=0;
            }
        }
        if (a==1) {
            for (int i=2;i<(t-it);i++) {
                if ((t-it)%i==0) {
                    b=1;
                    break;
                }
                else {
                    b=0;
                }
            }
            if (b==1) {
                cout << it << " " << (t-it) << endl;
                break;
            }
        }
    }
    return 0;
}