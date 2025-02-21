#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
//sum till n
int n;
int sum=0;
scanf("%d",&n);
for (int i=0;i<=n;i++){
    sum = sum+i;
    printf("Sum : %d \n",sum);
}

printf("FInal sum : %d\n",sum);


    
}