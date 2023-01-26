#include <iostream>
using namespace std;

int main(){
    int i,t,normalBurger,premiumBurger,totalBurger, totalMoney;

    cin >> t;
    for(int i = 1; i <= t; i++){
        cin>>normalBurger>>premiumBurger>>totalBurger>>totalMoney;
        int normal = 0;
        if(totalBurger*normalBurger > totalMoney){
            cout<< "-1" << endl;
        }
        else if(totalBurger*premiumBurger < totalMoney){
            cout << "0" << " " << totalBurger << endl;
        }
        else{
            normal = (totalMoney - (premiumBurger*totalBurger)) / (normalBurger - premiumBurger);
            if((totalMoney - premiumBurger*totalBurger) % (normalBurger - premiumBurger) != 0){
                normal++;
            }
            cout<<normal<<" "<<totalBurger - normal <<endl;
        }
    }
    return 0;
}



