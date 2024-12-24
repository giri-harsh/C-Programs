#include <stdio.h>
#include <math.h>
int main(){
    int n;
    printf("Enter a number :\n");
    scanf("%d",&n);
    int power=pow(n,2);
    printf("Og number :%d\n Squared :%d\n",n,power);
}