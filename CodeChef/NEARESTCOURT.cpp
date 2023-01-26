#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        int x,y;
        cin>>x>>y;
        double maxx = max(x,y);
        double minn = min(x,y);
        double calculation = (maxx - minn) / 2;
        double result = ceil(calculation);
        cout << result << endl;
    }
    return 0;
}
