#include <iostream>

using namespace std;

int main(){
    int t, a, b, c, i, largeNumber;

    cin >> t ;

    for(i = 1; i <= t; i++){
        cin >> a >> b;
        c = max(a,b);
        cout << (7-c) << endl;
    }

    return 0;
}

