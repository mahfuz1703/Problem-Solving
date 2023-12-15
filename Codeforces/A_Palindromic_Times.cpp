#include <bits/stdc++.h>
using namespace std;
#define print(x) cout << x << "\n"

int main(){
    int h, m, tm;
    char c;
    cin >> h >> c >> m;
    tm = (h*60) + m;

    if(tm < 70) print("01:10");
    else if(tm >= 70 and tm < 140) print("02:20");
    else if(tm >= 140 and tm < 210) print("03:30");
    else if(tm >= 210 and tm < 280) print("04:40");
    else if(tm >= 280 and tm < 350) print("05:50");
    else if(tm >= 350 and tm < 601) print("10:01"); 
    else if(tm >= 601 and tm < 671) print("11:11"); 
    else if(tm >= 671 and tm < 741) print("12:21"); 
    else if(tm >= 741 and tm < 811) print("13:31"); 
    else if(tm >= 811 and tm < 881) print("14:41"); 
    else if(tm >= 881 and tm < 951) print("15:51"); 
    else if(tm >= 951 and tm < 1202) print("20:02"); 
    else if(tm >= 1202 and tm < 1272) print("21:12"); 
    else if(tm >= 1272 and tm < 1412) print("23:32");
    else print("00:00");
    
    return 0; 
}