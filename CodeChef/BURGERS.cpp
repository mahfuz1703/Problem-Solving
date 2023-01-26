#include <iostream>
using namespace std;

int main(){
    int  t, x, y;

    cin >> t;
    for(int i = 1; i <= t; i++){
        cin >> x >> y;
        cout << min(x,y) << endl;
    }
    return 0;
}


