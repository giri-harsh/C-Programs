#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
//sum of odd and even
int n;
scanf("%d",&n);
// int e=2,o=1;
int sum1=0;
int sum2=0;
for (int i=0;i<=n;i++){
    if (i%2==0){
        sum1 = sum1+i;
    }
    else sum2 =sum2+i;
}

printf("SUm of even :%d\n",sum1);
printf("SUm of odd :%d\n",sum2);

    
}