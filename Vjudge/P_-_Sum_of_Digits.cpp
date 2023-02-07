// Problem: https://vjudge.net/contest/468964#problem/P
#include <bits/stdc++.h>
using namespace std;

int main(){
    string str; cin >> str;
    int sum = 0;
    for(int i{0}; i < str.size(); i++){
        sum += str[i] - '0';
    }
    int ans = 1;
    if(str.size() == 1){
        ans = 0;
    }

    while(sum > 9){
        int temp = sum, newSum = 0;
        while(temp){
            newSum += temp % 10;
            temp /= 10;
        }
        sum = newSum;
        ans++;
    }
    cout << ans << "\n";
    return 0;
}