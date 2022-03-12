#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
#include <iostream>
 
using namespace std;
 
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void team(int n, vector<int> v) {
    vector<int> one;
    vector<int> two;
    vector<int> three;
    for(int i=0;i<n;i++) {
        if(v[i] == 1) {
            one.push_back(i+1);
        }
        else if(v[i] == 2) {
            two.push_back(i+1);
        }
        else {
            three.push_back(i+1);
        }
    }
    int teams = min(one.size(), min(two.size(), three.size()));
    cout << teams << endl;
    if (teams == 0) {
        return;
    }
    for(int i=0;i<teams;i++) {
        cout << one[i] << " " << two[i] << " " << three[i] << endl;
    }
}

int main() {
    fast_cin();
    int n;
    cin >> n;
    vector<int> v(n,0);
    for(int i=0;i<n;i++) {
        cin >> v[i];
    }
    team(n, v);
    return 0;
}