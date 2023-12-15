//Water Melon problem Solve on CodeForces
#include <stdio.h>

int main(){
    int w;

    printf("Enter watermelon weight: ");
    scanf("%d", &w);

    if(w <= 2 || w % 2 != 0){
        printf("NO\n");
    }
    else{
        printf("YES\n");
    }

    return 0;
}
