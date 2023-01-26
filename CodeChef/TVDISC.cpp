#include <iostream>
using namespace std;

int main(){
    int t;
    cin>> t;
    for(int i = 0; i < t; i++){
        int a,b,x,y;
        cin>>a>>b>>x>>y;
        int ftvCost = a - x;
        int stvCost = b - y;
        if(ftvCost < stvCost){
            cout << "First" << endl;
        }
        else if(stvCost < ftvCost){
            cout << "Second" << endl;
        }
        else{
            cout << "Any" << endl;
        }
    }
    return 0;
}
