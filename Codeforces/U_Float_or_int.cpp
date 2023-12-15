#include <bits/stdc++.h>
using namespace std;

bool isINT(double x){
    int n = x;
    double temp = x - n;
    if(temp > 0){
        return false;
    }
    return true;
}
void solve(double x){
    if(isINT(x)){
        cout << "int " << x << "\n";
    }else{
        int n = x;
        double d = x - n;
        cout << "float " << n << " " << d << "\n";
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    double n;
    cin >> n;
    solve(n);
    return 0;
}
