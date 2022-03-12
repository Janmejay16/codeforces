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
    string s1,s2,s3,s4;
    cin>>s1>>s2>>s3;
    s4+=s1+s2;
    sort(s4.begin(),s4.end());
    sort(s3.begin(),s3.end());
    if(s3==s4){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}