#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vs vector<string>
#define loop(x,n) for (int i = x; i < n; i++)
#define print(x) cout << x << "\n"
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0), cout.tie(0);

bool isVowel(char c){
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main(){
    FASTER

    vs v;
    int cnt[] = {5,7,5};

    loop(0, 3){
        string s;
        char c; cin >> c;
        getline(cin, s);
        s = c + s;
        v.push_back(s);
    }

    loop(0, 3){
        int c = 0;
        for(auto u: v[i]){
            if(isVowel(u)) c++;
        }
        if(c != cnt[i]) return print("NO"), 0;
    }
    print("YES");
}