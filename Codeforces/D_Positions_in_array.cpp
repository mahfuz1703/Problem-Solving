/// Problem: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/D
#include <bits/stdc++.h>
using namespace std;

int main(){
    int s; cin >> s;
    int arry[s];
    for(int i = 0; i < s; i++){
        cin >> arry[i];
    }
    for(int i = 0; i < s; i++){
        if(arry[i] <= 10){
            cout << "A[" << i << "] = " << arry[i] << "\n";
        }
    }
    return 0;
}