#include <iostream>
using namespace std;

int main(){
    int i, t;
    cin >> t;
    for(i = 0; i < t; i++){
        int temp;
        cin >> temp;
        (temp > 20) ? cout << "HOT" << endl : cout << "COLD" << endl;
    }
    return 0;
}
