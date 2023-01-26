#include <iostream>
using namespace std;

int main(){
    int t, x, min_incorrect;

    cin>>t;
    for(int i = 1; i <= t; i++){
        cin >> x;
        if(x % 3 == 0){
            cout<<"0"<<endl;
        }
        else if(x % 3 == 1){
            cout<<"2"<<endl;
        }
        else{
            cout<<"1"<<endl;
        }
    }
    return 0;
}



