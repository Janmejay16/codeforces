#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
#include <iostream>
#include <map>
 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main()
{
    fast_cin();
    int n, m;
    cin >> n >> m;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++) {
            if(i%2==1) cout << "#";
            else if(i%4==2) {
                if(j==m) cout << "#";
                else cout << ".";
            }
            else {
                if(j==1) cout << "#";
                else cout << ".";
            }
        }
        cout<<"\n";
    }
    cout << endl; 
    return 0;
}