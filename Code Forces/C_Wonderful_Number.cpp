#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isOdd(int n){
    if(n % 2 == 0){
        return false;
    }else{
        return true;
    }
}
string DecToBin(int n){
    string str;
    while(n){
        if(n & 1){
            str += '1';
        }else{
            str += '0';
        }
        n>>=1;
    }
    return str;
}
bool isPalindrome(int n){
    string str = DecToBin(n);
    string revStr;
    for(int i = str.size()-1; i >= 0; i--){
        revStr += str[i]; // This is actual binary equivalent of number n
    }
    if(str == revStr){
        return true;
    }else{
        return false;
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    if(isOdd(n) && isPalindrome(n)){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }
    return 0;
}
