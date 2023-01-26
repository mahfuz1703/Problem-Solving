#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        int p;
        cin>>p;
        cout << 100 - ((100*p) / 100) << endl;
    }
    return 0;
}
