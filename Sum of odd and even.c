#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int s1=0,s2=0;
    for (int i=0;i<=n;i++){
        if(i%2==0){
            s1=s1+i;
        }
        else
        s2=s2+i;
    }
    printf("\n sum even :%d \n Sum odd :%d",s1,s2);
}
