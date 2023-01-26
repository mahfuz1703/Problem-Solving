#include <iostream>
using namespace std;

int main(){
    int intType;
    long int longInt;
    char a;
    float b;
    double c;

    scanf("%d %ld %c %f %lf", &intType, &longInt, &a, &b, &c);
    printf("%d\n", intType);
    printf("%ld\n", longInt);
    printf("%c\n", a);
    printf("%.3f\n", b);
    printf("%.9lf\n", c);

    return 0;

}
