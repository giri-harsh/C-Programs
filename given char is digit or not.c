#include <stdio.h>
int main(){
    int num[10]={0,1,2,3,4,5,6,7,8,9};
    // for (int i=0;i<=10;i++){
    //     printf("%d\n",n[i]);
    // }
    char input;
    printf("Enter Any character to check\n");
    scanf("%c",&input);
    int flag=0;
    for (int i=0;i<=10;i++){
        if(input==num[i]){
            flag=1;
        }
    }
    if (flag==0)
    printf("It is a char");
    else 
    printf("it is a number\n");
}