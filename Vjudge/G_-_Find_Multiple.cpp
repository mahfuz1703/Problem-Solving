// Problem: https://vjudge.net/contest/468964#problem/G
#include<bits/stdc++.h>
using namespace std;

signed main(){
    int a, b, c;
    cin>> a >> b >> c;
    int div1 = (a-1) / c;
    int div2 = b / c;
    int ans = div2 - div1;
    if(ans > 0){
        cout<< ans*c << endl;
    }else{
        cout<< -1 << endl;
    }
    return 0;
}