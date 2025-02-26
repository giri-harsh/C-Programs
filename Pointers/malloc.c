#include <stdio.h>
#include <stdlib.h>
int main(){
    //making an array with malloc
    int n;

    printf("ENter size of array\n");
    scanf("%d",&n);
    int *ptr;
    ptr = (int*)malloc(n*sizeof(int));
    //input of array
    for (int i=0;i<n;i++){
        scanf("%d",&ptr[i]);
    }


    //output printing
    for (int i=0;i<n;i++)
    printf("Elemts are %d \n",ptr[i]);   
}