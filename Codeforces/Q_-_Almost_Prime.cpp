/// Problem: https://vjudge.net/contest/468964#problem/Q
#include <bits/stdc++.h>
using namespace std;

const int n = 3030;
bool prime[n];
bool isPrime(int n){
    if(n == 1){
        return false;
    }

    for (int i = 2; i < n; i++){
        if (n % i == 0){
            return false;
        }
    }
    return true;
}
bool almostPrime(int n){
    int counter = 0;
    for (int i = 1; i <= n; i++){
        if (n % i == 0){
            if(prime[i]){
                counter++;
            }
        }
    }
    if(counter == 2){
        return true;
    }else{
        return false;
    }
}
int main(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        prime[i] = isPrime(i);
    }
    int ans = 0;
    for(int i = 1; i <= n; i++){
        if(almostPrime(i)){
            ++ans;
        }
    }
    cout << ans << "\n";
    return 0;
}





// const int N = 3030;
// bool prime[N];
// bool is_prime(int n){
//     if (n == 1)
//         return false; // 1 is not a prime by definition
//     for (int i = 2; i < n; i++){
//         if (n % i == 0){ // n is divisible by i but i is neither 1, nor n, so n must not be a prime
//             return false;
//         }
//     }
//     return true;
// }
// bool is_almost_prime(int n){
//     int cnt = 0;
//     for (int i = 1; i <= n; i++){
//         if (n % i == 0){ // i is a divisor
//             if (prime[i]){ // prime divisor
//                 cnt++;
//             }
//         }
//     }
//     if (cnt == 2)
//         return true;
//     else
//         return false;
// }
// int main(){
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++){
//         prime[i] = is_prime(i);
//     }
//     int ans = 0;
//     for (int i = 1; i <= n; i++){
//         if (is_almost_prime(i)){
//             ++ans;
//         }
//     }
//     cout << ans << '\n';
//     return 0;
// }