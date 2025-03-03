#include<stdio.h>
#include <stdlib.h>
int main(){
    // int x=4;
    // int *px=&x;
    // int y=*px;
    int n;
    printf("Enter size:");
    scanf("%d",&n);

    // int *ptr; 
    // ptr = (int*)malloc(n*sizeof(int));
    // for (int i=0;i<n ;i++){
    //     printf("ENTER : ");
    //     scanf("%d",&ptr[i]);
 
    // }

    // for (int i=0;i<n;i++)
    // printf("array %d \n",ptr[i]);
    int *p=(int*)calloc(n,sizeof(int));
    for (int i=0;i<n;i++)
    printf("array %d \n",p[i]);
}
