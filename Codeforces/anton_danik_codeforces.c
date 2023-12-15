#include <stdio.h>

int main(){
    int i, n, anton = 0, dhanik = 0;
    char m;

    scanf("%d", &n);
    for(i = 0; i <= n; i++){
        scanf("%c", &m);
        if(m == 'A'){
            anton = anton + 1;
        }
        else if(m == 'D'){
            dhanik = dhanik + 1;
        }
    }

    if(anton == dhanik){
        printf("Friendship\n");
    }
    else if(anton > dhanik){
        printf("Anton\n");
    }
    else if(anton < dhanik){
        printf("Danik\n");
    }


    return 0;
}
