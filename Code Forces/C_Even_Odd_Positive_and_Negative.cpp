#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, evenN = 0, oddN = 0, possN = 0, negN = 0; cin >> n;
    for(int i{1}; i <= n; i++){
        int a; cin >> a;
        if(a % 2 == 0){
            evenN++;
            if(a > 0){
                possN++;
            }
            else if(a < 0){
                negN++;
            }
        }else{
            if(a > 0){
                oddN++;
                possN++;
            }
            else if(a < 0){
                oddN++;
                negN++;
            }
        }
    }
    cout << "Even: " << evenN << "\n";
    cout << "Odd: " << oddN << "\n";
    cout << "Positive: " << possN << "\n";
    cout << "Negative: " << negN << "\n";
    return 0;
}