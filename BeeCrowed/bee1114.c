#include <stdio.h>

int main(){
    int pass, c_pass = 2002;

    while(c_pass){
        scanf("%d",&pass);

        if(pass == c_pass){
            printf("Acesso Permitido\n");
            break;
        }
        else{
            printf("Senha Invalida\n");
        }
    }

    return 0;
}