#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b; cin >> a >> b;
    int counter = 0;
    if(a < b){
        for(int i{a}; i <= b; i++){
            counter++;
        }
    }else{
        counter = 0;
    }
    cout << counter << "\n";
    return 0;
}