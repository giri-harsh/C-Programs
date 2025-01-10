#include <stdio.h>
int main(){
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    int absolute=n*-1;
    if (n<0){
        printf("Absolute value : %d",absolute);
    }
    else printf("Absolute value :%d",n);

}