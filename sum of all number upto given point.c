#include <stdio.h>
int main(){
    int n,sum;
    printf("\n Enter end point");
    scanf("%d",&n);
    sum=0;
    for (int i=0;i<=n;i++){
        sum = sum+i;
    }
    printf("\n Sum :%d",sum);}