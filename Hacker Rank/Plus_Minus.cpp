#include <bits/stdc++.h>
using namespace std;
#define db double

int main(){
    int s; cin >> s;
    int arry[s];
    for(int i = 0; i < s; i++){
        cin >> arry[i];
    }
    int p = 0, n = 0, z = 0;
    for(int i = 0; i < s; i++){
        if(arry[i] > 0){
            p++;
        }
        else if(arry[i] < 0){
            n++;
        }
        else if(arry[i] == 0){
            z++;
        }
    }
    db resP = (float)p/(float)s;
    db resN = (float)n/(float)s;
    db resZ = (float)z/(float)s;

    cout << fixed << setprecision(6) << resP << "\n" << resN << "\n" << resZ << "\n";
    return 0;
}