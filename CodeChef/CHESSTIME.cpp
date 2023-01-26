#include <iostream>
using namespace std;

int main(){
    int t, hours, minutes, i;

    cin >> t;
    for(i = 1; i <= t; i++){
        cin >> hours;
        minutes = hours * 60;
        cout << (minutes / 20) << endl;
    }
    return 0;
}

