#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
#include <iostream>
 
using namespace std;
 
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

/*
// -----------------------------------------------------
// BUY A SHOWEL
// -----------------------------------------------------
int calcShowels(int k, int r) {
    int i=2;
    int count = 1;
    int value = k;
    while(true) {
        if((value%10==0) || (value%10==r)) {
            return count;
        }
        value = k*i;
        count++;
        i++;
    }
    return 0;
}
// */

/*
// -----------------------------------------------------
// SHORT OF STRINGS
// -----------------------------------------------------
string shortString(string s) {
    if(s.length() == 2) {
        return s;
    }
    string r="";
    r.push_back(s[0]);
    for(int i=1;i<s.length()-1;i++) {
        if(s[i] == s[i+1]) {
            r.push_back(s[i]);
            i+=1;
        }
    }
    r.push_back(s[s.length()-1]);
    return r;
}

void printShortStrings(vector<string> v) {
    for(string s: v) {
        cout << shortString(s) << endl;
    }
}
// */



int main() {
    fast_cin();
    // -----------------------------
    // BUY A SHOWEL
    // -----------------------------
    /*
    int k,r;
    cin >> k >> r;
    cout << calcShowels(k, r) << endl;
    // */


    // -----------------------------
    // SHORT OF STRINGS
    // -----------------------------
    /*
    int n;
    vector<string> strings;
    cin >> n;
    for(int i=0;i<n;i++) {
        string s;
        cin >> s;
        strings.push_back(s);
    }
    printShortStrings(strings);
    // */
    

    // ------------------------------
    // BALANCED ARRAY
    // ------------------------------
    // /*
    
    // */
    return 0;
}