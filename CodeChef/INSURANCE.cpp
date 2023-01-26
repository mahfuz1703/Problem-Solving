#include <iostream>
using namespace std;

int main(){
    int i, t, x, y;
    cin>>t;
    for(i = 1; i <= t; i++){
        cin>>x>>y;
        if(x > y){
            cout<<y<<endl;
        }
        else{
            cout<<x<<endl;
        }
    }
    return 0;
}
