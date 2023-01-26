//**************My Own thinking*********
#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d %d",&a, &b, &c);

    if(a>b && a>c){
        printf("%d eh o maior\n", a);
    }
    else if(b>a && b>c){
        printf("%d eh o maior\n", b);
    }
    else if(c>a && c>b){
        printf("%d eh o maior\n", c);
    }

    return 0;
}


//*************Help from Google*********************
/*   #include <stdio.h>

   int main(){
       int a, b, c, m;
       scanf("%d %d %d",&a, &b, &c);

       m = a;
       if(a<b || a<c){
           if (b<c){
               m = c;
           }
           else{
               m = b;
           }
       }
       printf("%d eh o maior\n", m);

       return 0;
   }
   */

   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   