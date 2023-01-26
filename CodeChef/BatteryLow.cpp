#include <iostream>
using namespace std;

int main(){
    int t, b, i;

    cin >> t;
    for(i = 1; i <= t; i++){
        cin >> b;
        if(b <= 15){
            cout <<"YES"<< endl;
        }
        else if(b > 15){
            cout <<"NO"<< endl;
        }
    }
    return 0;
}
