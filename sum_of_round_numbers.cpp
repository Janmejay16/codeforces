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
    for(int it=1;it<=t;it++) {
        ll n;
        cin >> n; 
        ll a[n];
        int i=0;
        while(n>0) {
            if (n%10 > 0) {
                a[i]=(n%10);
                n-=(n%10);
                i++;
            }
            else if (n%100 > 0) {
                a[i] = (n%100);
                n-=(n%100);
                i++;
            }   
            else if (n%1000 > 0) {
                a[i] = (n%1000);
                n-=(n%1000);
                i++;
            }   
            else if (n%10000 > 0) {
                a[i] = (n%10000);
                n-=(n%10000);
                i++;
            }   
            else {
                a[i] = n;
                n-=n;
                i++;
                break;
            }
        }
        cout << i << endl;
        for (int j=0;j<i;j++) {
            cout << a[j] << " ";
        }
        cout << "\n";
    }
    return 0;
}