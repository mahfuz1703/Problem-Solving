#include <iostream>
using namespace std;

int main(){
    int i, t, x, y, z;

    cin>>t;
    for(i = 1; i <= t; i++){
        cin >> x >> y >> z;
        int n = 1;
        if(x % y == 0){
           n -=1;
        }
        n += x / y;
        cout << n * z << endl;
    }
    return 0;
}
