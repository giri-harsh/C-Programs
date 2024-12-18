#include <stdio.h>
int power(int n,int p){
    if(n==0)
    return 1;
    int prev_power=power(p,n-1);
    return n*prev_power;
}
int main(){
    int p,n;
    printf("Enter a number\n");
    scanf("%d",&p);
    printf("Enter power\n");
    scanf("%d",&n);
    printf("Value :%d\n",power(n,p));
}