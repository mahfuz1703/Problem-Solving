#include <iostream>

using namespace std;

int main(){
    int t, a, b, i, sum;

    cin >> t ;

    for(i = 1; i <= t; i++){
        cin >> a >> b;
        sum = a + b;
        cout << sum << endl;
    }

    return 0;
}
