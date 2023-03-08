#include <bits/stdc++.h>
using namespace std;

void solve(int n, string s){
    int a = 0, d = 0;
    for(int i = 0;  i < n; i++){
        if(s[i] == 'A'){
            a++;
        }
        else if(s[i] == 'D'){
            d++;
        }
    }
    if(a > d){
        cout << "Anton\n";
    }
    else if(a < d){
        cout << "Danik\n";
    }
    else{
        cout << "Friendship\n";
    }
}
int main(){
    int n; cin >> n;
    string s; cin >> s;
    solve(n,s);
    return 0;
}