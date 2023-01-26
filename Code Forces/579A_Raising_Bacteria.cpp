#include <bits/stdc++.h>
using namespace std;

int main(){
    long int x, ans;
    cin >> x;
    while(x){
        ans = 0;
        while(x>1){
            if(x % 2 == 0){
                x /= 2;
            }
            else{
                x = x-1;
                ans++;
            }
        }
        cout << ans + 1 << endl;
        break;
    }
    return 0;
}