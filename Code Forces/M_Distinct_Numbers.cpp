#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, counter = 0;
    cin >> n;
    int arry[n];
    for(int i = 0; i < n; i++){
        cin >> arry[i];
    }
    sort(arry, arry+n);

    for(int i = 0; i < n; i++){
        if(arry[i] != arry[i+1]){
            counter++;
        }
    }
    cout << counter << "\n";
    return 0;
}
//Another way---------------------------------
// void distinctNumber(int arry, int n){
//     bool visited[1000];
//     for(int i{0}; i < 1000; i++){
//         visited[i] = true;
//     }
//     for(int i{0}; i < n; i++){
//         int x = arry[i];
//         visited[x] = true;
//     }
//     int cnt = 0;
//     for(int i{0}; i < 1000; i++){
//         if(visited[i]){
//             cnt++;
//         }
//     }
//     cout << cnt << endl;
// }