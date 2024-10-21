#include <stdio.h>
int main(){
    int n;
    int sum1=0;
    int sum2=0;    
    scanf("%d",&n);
   for(int i=0;i<=n;i++){
    if (i%2==0){
        sum1 = sum1+i; 
    }
    else 
    sum2 = sum2+i;
   }
    printf("\n sum even : %d",sum1);
    printf("\n Sum odd : %d ",sum2);

}