#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i = 1;  i <= t; i++){
        int w, x, y, z;
        cin >> w >> x >> y >> z;
        int total = w + (x - y) * z;
        cout << total << endl;
    }
    return 0;
}