#include <iostream>
using namespace std;

int main(){
    string players;
    int i, condition = 1;

    cin >> players;

    for(i = 0; i < players.length(); i++){
        if(players[i] == players[i-1]){
            condition++;
            if(condition == 7){
                cout <<"YES"<< endl;
                return 0;
            }
        }
        else{
            condition = 1;
        }
    }
    cout <<"NO"<<endl;

    return 0;
}
