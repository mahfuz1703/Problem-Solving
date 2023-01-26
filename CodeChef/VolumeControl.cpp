#include <iostream>
using namespace std;

int main(){
    int t, x, y, MX, MN, result;

    cin >> t;
    for(int i = 1; i <= t; i++){
        cin >> x >> y;
        MX = max(x,y);
        MN = min(x,y);
        result = MX - MN;
        cout <<result<< endl;
    }
    return 0;
}
