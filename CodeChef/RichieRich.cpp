#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i = 1; i <= t; i++){
        int a, b, x;
        cin >> a >> b >> x;
        cout << (b-a)/x << endl;
    }
    return 0;
}