/// In the name of ALLAH
/// La ilaha illallahu Muhammadur Rasulullah
                                                
#include<bits/stdc++.h>
using namespace std;
                            
typedef long long ll;
typedef map<int, int> mi;
typedef map<ll, ll> mll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;
                            
#define pb push_back
#define f first
#define s second
#define mp make_pair
#define all(a) (a).begin(),(a).end()
#define sz(x) (int)x.size()
#define mid(l,r) ((r+l)/2)
#define left(node) (node*2)
#define right(node) (node*2+1)
#define mx_int_prime 999999937
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
#define gcd(a,b) __gcd(a,b)
#define sqr(a) ((a) * (a))
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(x) cout.unsetf(ios::floatfield); cout.precision(x); cout.setf(ios::fixed,ios::floatfield);
                                        
const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;

// double roundUp(double number, int decimalPlaces) {
//     double multiplier = pow(10.0, decimalPlaces);
//     return ceil(number * multiplier) / multiplier;
// }

double roundUpLastDigit(double number, int decimalPlaces) {
    double multiplier = pow(10.0, decimalPlaces);
    int intPart = static_cast<int>(number * multiplier);
    double fractionalPart = (number * multiplier) - intPart;

    if (fractionalPart > 0.0) {
        int lastDigit = static_cast<int>(fractionalPart * 10);
        intPart += (lastDigit >= 5);
    }

    return static_cast<double>(intPart) / multiplier;
}
void testCase(){
    double number; cin >> number;
    int decimalPlaces; cin >> decimalPlaces;

    double roundedNumber = roundUpLastDigit(number, decimalPlaces);

    cout << fixed << setprecision(decimalPlaces) << roundedNumber << "\n";
}
int main(){
    FASTER
                 
    int t = 1;
    cin >> t;
    while(t--){
        testCase();
    }
    return 0;
}
/// Alhamdulilla for everything