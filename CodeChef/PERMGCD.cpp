#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        int n,x;
        cin>>n>>x;
        if(x < n){
            cout << "-1" << endl;
            continue;
        }
        else{
            cout << x - n + 1 << " ";
        }
        for(int i = 1; i <= n; i++){
            if(i != x-n+1){
                cout << i << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
