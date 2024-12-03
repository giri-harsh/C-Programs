#include <stdio.h>
void table(int n){
    int sum=0;
    for (int i=1;i<=10;i++){
        sum = sum +n;
        printf("%d\n",sum);
    }
}


int main(){
    int n;
    scanf("%d",&n);
    table(n);
    
}