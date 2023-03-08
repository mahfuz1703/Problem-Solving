/// Problem: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/C
#include <bits/stdc++.h>
using namespace std;

int main(){
    int s; cin >> s;
    int arry[s];
    for(int i = 0; i < s; i++){
        cin >> arry[i];
    }
    for(int i = 0; i < s; i++){
        if(arry[i] > 0){
            arry[i] = 1;
        }
        else if(arry[i] < 0){
            arry[i] = 2;
        }
    }
    for(int i = 0; i < s; i++){
        cout << arry[i] << " ";
    }
    return 0;
}