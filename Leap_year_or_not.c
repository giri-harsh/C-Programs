//leap year or not
#include <stdio.h>
int main(){
    int n;
    printf("\n Enter a year");
    scanf("%d",&n);
    if (n%4==0)
    printf("\n Leap year");
    else
    printf("\n not a leap year");
}