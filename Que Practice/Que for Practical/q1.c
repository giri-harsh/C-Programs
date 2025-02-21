#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    ///greatest of three
    int a,b,c;
    printf("Enter 3 num\n");
    scanf("%d%d%d",&a,&b,&c);
    // printf("Entered Num : \n A : %d\n B: %d")
    if (a>b && a>c){
        printf("A is greates :%d",a);
    }
    else if (b>a && b>c)
    printf("B is greatest : %d",b);
    else 
    printf("C is greatest : %d",c);


}