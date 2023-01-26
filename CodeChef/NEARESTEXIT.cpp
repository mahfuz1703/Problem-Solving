#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i = 1; i <= t; i++){
        int x;
        cin >> x;
        if(x >= 1 && x <= 50){
            cout << "LEFT" << endl;
        }
        else{
            cout << "RIGHT" << endl;
        }
    }
    return 0;
}