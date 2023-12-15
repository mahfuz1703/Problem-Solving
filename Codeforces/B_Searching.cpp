#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arry[n];
    for(int i{0}; i < n; i++){
        cin >> arry[i];
    }
    int key;
    cin >> key;
    bool found = false;
    for(int i{0}; i < n; i++){
        if(arry[i] == key){
            cout << i << "\n";
            found = true;
            break;
        }
    }
    if(!found){
        cout << -1 << "\n";
    }
    return 0;
}