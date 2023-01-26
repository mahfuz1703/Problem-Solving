#include <iostream>
using namespace std;

int main(){
    int i,t;
    cin>>t;
    for(i = 0; i < t; i++){
        int a, b;
        cin>>a>>b;
        cout << (a/10)*b << endl;
    }
    return 0;
}
