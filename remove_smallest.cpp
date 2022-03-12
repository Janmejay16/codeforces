#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;

#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 

int main()
{
    fast_cin();
    int t;
    cin >> t;
    for(int it=1;it<=t;it++) {
     int n;
     cin >> n;
     bool flag=true;
     vector<int> v;
     for (int j=0;j<n;j++) {
         int k;
         cin >> k;
         v.push_back(k);
     }
     sort(v.begin(), v.end());
     for (int j=1;j<n;j++) {
         if (abs(v[j-1] - v[j]) > 1) {
          flag=false;
          break;   
         }
     }
     cout << (flag ? "YES": "NO") << endl;
    }
    return 0;
}