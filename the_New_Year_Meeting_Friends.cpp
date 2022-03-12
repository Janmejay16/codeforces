#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
#include <iostream>
 
using namespace std;
 
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int findMin(vector<int> locations) {
    // int dist=0;
    sort(locations.begin(), locations.end());
    return locations[2] - locations[0];
} 

int main() {
    fast_cin();
    vector<int> locations (3,0);
    cin >> locations[0] >> locations[1] >> locations[2];
    cout << findMin(locations) << endl;
    return 0;
}