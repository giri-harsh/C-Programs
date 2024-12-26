#include <stdio.h>

int sum (int a,int b){
    return a+b;
}

int main(){
    int a,b;
    printf("Enter two number\n");
    scanf("%d%d",&a,&b);
    int s=sum(a,b);
    printf("Sum : %d",s);
}