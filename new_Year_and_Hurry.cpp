#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
#include <iostream>
 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 
int main()
{
    fast_cin();
    int n,k;
    cin >> n >> k;
    int minutes = 240;
    int count = 0;
    int point=5;
    while(true) {
        if (count==n) break;
        minutes=minutes-point;
        if (minutes<k) break;
        count+=1;
        point+=5;
    }
    cout << count << endl; 
    return 0;
}