/// Problem: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Y
#include <bits/stdc++.h>
using namespace std;

void solve(int n){
    int left = 0;
    int right = 1;
    int nextTerm = left + right;
    // cout << left << " " << right << " ";
    for(int i = 1; i <= n; i++){
        if(i == 1){
            cout << left << " ";
        }

        if(i == 2){
            cout << right << " ";
        }
        cout << nextTerm << " ";
        left = right;
        right = nextTerm;
        nextTerm = left + right;
    }
    cout << "\n";
}
int main(){
    int n; cin >> n;
    solve(n);
    return 0;
}