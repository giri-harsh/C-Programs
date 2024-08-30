#include <stdio.h>
int main(){
    int a,b,c,d,e;
    printf("\n Enter 1 number");
    scanf("%d",&a);
    printf("\n Enter 2 number");
    scanf("%d",&b);
    printf("\n Enter 3 number");
    scanf("%d",&c);
    printf("\n Enter 4 number");
    scanf("%d",&d);
    printf("\n Enter 5 number");
    scanf("%d",&e);
    int avg = (a+b+c+d+e)/5;
    printf("\n avg of 5 numbers is %d",avg);
}