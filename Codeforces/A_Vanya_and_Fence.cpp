#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,  h; cin >> n >> h;
    int arry[n];
    int cnt = 0;
    for(int i = 0; i < n; i++){
        cin >> arry[i];
    }
    for(int i = 0; i < n; i++){
        if(arry[i] > h){
            cnt += 2;
        }else{
            cnt++;
        }
    }
    cout << cnt << "\n";
    return 0;
}