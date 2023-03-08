#include <bits/stdc++.h>
using namespace std;

int main(){
    int s, k; cin >> s >> k;
    int arry[s];
    for(int i = 0; i < s; i++){
        cin >> arry[i];
    }
    int cnt = 0;
    for(int i = 0; i < s; i++){
        for(int j = i+1; j < s; j++){
            int sum = 0;
            sum = arry[i] + arry[j];
            if(sum % k == 0){
                cnt++;
            }
            sum = 0;
        }
    }
    cout << cnt << "\n";
    return 0;
}