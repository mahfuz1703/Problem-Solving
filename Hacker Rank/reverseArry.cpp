#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arry[n];

    for(int i = 0; i < n; i++){
        cin >> arry[i];
    }

    for(int i = n-1; i >= 0; i--){
        cout << arry[i] << " ";
    }
    return 0;
}