#include <iostream>
using namespace std;

int main(){
    int i, j, k, t, n, arry[5000], countt;
    cin >> t;

    for(i = 1; i <= t; i++){
        countt = 0;
        cin >> n;
        for(j = 0; j < n; j++){
            cin >> arry[j];
        }
        for(k = 0; k < n; k++){
            if(arry[k] >= 1000){
                countt ++;
            }
        }
        cout << countt << endl;
    }
    
    return 0;
}