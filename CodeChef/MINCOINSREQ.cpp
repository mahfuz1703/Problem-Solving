#include <iostream>
using namespace std;

int main(){
    int i, t, x, result;
    cin>>t;
    for(i = 1; i <= t; i++){
        cin>>x;
        result = x % 10;
        cout << result << endl;
    }
    return 0;
}
