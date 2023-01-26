#include <iostream>
using namespace std;

int main(){
    int t, n, x, y;

    cin>>t;
    for(int i = 1; i <= t; i++){
        cin >> n >> x >> y;
        if(n >= (x + (2 * y))){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}


