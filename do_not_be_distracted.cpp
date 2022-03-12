#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
#include <iostream>
 
using namespace std;
 
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

class Stack {
    int capacity;
    int top;
    char *arr;

    public: 
        Stack(int n) {
            top=-1;
            capacity=n;
            arr = new char[n];
        }

        void push(char d) {
            if(top==capacity-1) {
                return;
            }
            arr[++top] = d;
        }

        char pop() {
            // Return -1 if empty
            if(top==-1) {
                return -1;
            }
            return arr[top--];
        }

        char peek() {
            // Return -1 if empty
            if(top==-1) {
                return -1;
            }
            return arr[top];
        }

        bool search(char val) {
            for(int i=top;i>=0;i--) {
                if(arr[i] == val) {
                    return true;
                }
            }
            return false;
        }
};

void checkSusp(int n, string s) {
    Stack* stack = new Stack(n);
    stack->push(s[0]);
    for(int i=1;i<n;i++) {
        if(stack->peek() != s[i]) {
            if(stack->search(s[i]) == true) {
                cout << "NO" << endl;
                return;
            }
            else {
                stack->push(s[i]);
            }
        }
    }
    cout << "YES" << endl;
}

int main() {
    fast_cin();
    int N;
    cin >> N;
    for(int i=0;i<N;i++) {
        int n;
        string s;
        cin >> n;
        cin >> s;
        checkSusp(n, s);
    }
    return 0;
}