#include <iostream>
using namespace std;

int main(){
    int i, t, x1, y1, x2, y2;
    cin>>t;
    for(i = 1; i <= t; i++){
        cin>>x1>>y1>>x2>>y2;
        int plan1 = x1 + y1;
        int plan2 = x2 + y2;
        cout<<min(plan1, plan2)<<endl;
    }

    return 0;
}
