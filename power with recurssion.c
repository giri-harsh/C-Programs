#include <stdio.h>
int power(int p,int n){
    if(n==0){
        return 1;
    }
    int prev_p=p*power(p,n-1);
    return prev_p;
}

int main(){
    int n,p;
    printf("enter the number and no of times to multiply");
    scanf("%d%d",&p,&n);
    printf("power : %d",power(p,n));
}