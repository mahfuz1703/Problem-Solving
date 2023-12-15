#include <bits/stdc++.h>
using namespace std;

bool notEven = false;
void evenNumber(int n){
    for(int i{1}; i <= n; i++){
        if(i % 2 == 0){
            cout << i << "\n";
            notEven = true;
        }
    }
}
int main(){
    int n; cin >> n;
    evenNumber(n);
    if(!notEven){
        cout << -1 << "\n";
    }
    return 0;
}