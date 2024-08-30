#include <stdio.h>
int main(){
    int a;
    int b;
    int c;
    int d;
    int e;
    printf("\n Enter 1st number");
    scanf("%d",&a);
    printf("\n Enter 2nd number");
    scanf("%d",&b);
    printf("\n Enter 3rd number");
    scanf("%d",&c);
    printf("\n Enter 4th number");

    scanf("%d",&d);
    printf("\n Enter 5th number");
    scanf("%d",&e);

    int multi = a*b*c*d*e;
    printf("\n multi = %d",multi);
    
}