#include <stdio.h>
int main(){
    int a,b;
    printf("\n enter a : ");
    scanf("%d",&a);
    printf("\n enter b : ");
    scanf("%d",&b);
  
    int add,sub,multi,div,remainder;
    add = a+b;
    sub = a-b;
    multi = a*b;
    div = a/b;
    remainder = a%b;
    printf("\n A+B : %d",add);
    printf("\n A-B : %d",sub);
    printf("\n A*B : %d",multi);
    printf("\n A/B : %d",div);
    printf("\n A mod B : %d",remainder);    
}