//Author: Mohammad Mahfuz
//Gmail: mahfuzmia1703@gmail.com
//Problem: bee1037 - interval

//My Own Thinking****************************
#include <stdio.h>
int main(){
    float number;
    scanf("%f", &number);

    if (number >= 0 && number <= 25){
        printf("Intervalo [0,25]\n");
    }
    else if (number > 25 && number <= 50){
        printf("Intervalo (25,50]\n");
    }
    else if (number > 50 && number <= 75){
        printf("Intervalo (50,75]\n");
    }
    else if (number > 75 && number <= 100){
         printf("Intervalo (75,100]\n");
    }
    else if (number   < 0 || number > 100){
        printf("Fora de intervalo\n");
    }

    return 0;
}



///Help From Google***************************
// #include<stdio.h>
// 
// int main(){
    // float n;
    // scanf("%f", &n);
// 
    // if(n < 0 || n > 100){
        // printf("Fora de intervalo\n");
    // }
    // else{
        // if(n >= 0 && n <= 25){
            // printf("Intervalo [0,25]\n");
        // }
        // else if(n > 25 && n <= 50){
            // printf("Intervalo (25,50]\n");
        // }
        // else if(n > 50 && n <= 75){
            // printf("Intervalo (50,75]\n");
        // }
        // else{
            // printf("Intervalo (75,100]\n");
        // }
    // }
// 
    // return 0;
// }