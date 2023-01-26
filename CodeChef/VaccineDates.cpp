#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i = 1; i <= t; i++){
        int D, L , R;
		cin >> D >> L >> R;
		if (D >= L && D <= R)
		{
			cout << "Take second dose now\n";
		}
		else if (D < L)
		{
			cout << "Too Early\n";
		}
		else
		{
			cout << "Too Late\n";
		}
    }
    return 0;
}