/// Problem: https://vjudge.net/contest/468964#problem/M
#include <bits/stdc++.h>
using namespace std;

int main(){
    int s,t; cin >> s >> t;
    int counter = 0;
    for(int a = 0; a <= s; a++){
        for(int b = 0; a+b <= s; b++){
            for(int c = 0; a + b + c <= s; c++){
                if(a*b*c <= t){
                    counter++;
                }
            }
        }
    }
    cout << counter << "\n";
    return 0;
}