#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arry[n];
    for(int i{0}; i < n; i++){
        cin >> arry[i];
    }
    int minn = 1e9;
    for(int i{0}; i < n; i++){
        minn = min(minn, arry[i]);
    }
    cout << minn << " ";
    for(int i{0}; i < n; i++){
        if(arry[i] == minn){
            cout << i+1 << "\n";
            return 0;
        }
    }
    return 0;
}