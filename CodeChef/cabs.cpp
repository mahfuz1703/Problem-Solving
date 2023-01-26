#include <iostream>
using namespace std;

int main(){
    int t, x, y;

    cin >> t;
    for(int i = 1; i <= t; i++){
        cin >> x >> y;
        if(x < y){
            cout <<"FIRST"<< endl;
        }
        else if(x == y){
            cout <<"ANY"<< endl;
        }
        else if(x > y){
            cout <<"SECOND"<< endl;
        }
    }
    return 0;
}

