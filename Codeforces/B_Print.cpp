#include <bits/stdc++.h>
using namespace std;

void print_one_to_n(int n){
    for(int i{1}; i <= n; i++){
        if(i == n){
            cout << i;
        }else{
            cout << i << " ";
        }
        
    }
}
int main(){
    int n;
    cin >> n;
    print_one_to_n(n);
    return 0;
}