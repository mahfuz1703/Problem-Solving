#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        int x,y;
        cin>>x>>y;
        int disposable = x * 100;
        int cloth = y * 10;
        if(cloth < disposable || cloth == disposable){
            cout << "Cloth" << endl;
        }
        else{
            cout << "Disposable" << endl;
        }
    }
    return 0;
}
