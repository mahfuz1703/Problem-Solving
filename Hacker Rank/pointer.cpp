#include <bits/stdc++.h>
using namespace std;

void update(int *a,int *b) {
    int sum =  *a + *b;
    int sub = (max(*a, *b) - min(*a, *b));
    cout << sum << endl;
    cout << sub << endl;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);

    return 0;
}