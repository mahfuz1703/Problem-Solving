/// Problem: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int s; cin >> s;
    int arry[s];
    for(int i{0}; i < s; i++){
        cin >> arry[i];
    }
    long long sum = 0;
    for(int i{0}; i < s; i++){
        sum += arry[i];
    }
    if(sum < 0){
        cout << -(sum) << "\n";
    }else{
        cout << sum << "\n";
    }
    return 0;
}