#include <iostream>
using namespace std;

int main(){
    int t, x, y, i;

    cin >> t;
    for(i = 1; i <= t; i++){
        cin >> x >> y;
        if(x >= y){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
