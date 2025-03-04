#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    printf("Enter size\n");
    scanf("%d",&n);
    int *ptr = (int*)calloc(n, sizeof(int));
    for (int i=0;i<n;i++){
        scanf("%d",&ptr[i]);
    }

    

    for (int i=0;i<n;i++){
        // scanf("%d",&ptr[i]);
        printf("Array %d : %d \n",i,ptr[i]);
    }

    //realloc
    printf("Enter size of new array\n");
    scanf("%d",&n);
    ptr = (int*) realloc(ptr,n*sizeof(int));

    for (int i=0;i<n;i++){
        printf("Enter new array\n");
        scanf("%d",&ptr[i]);
    }

    for (int i=0;i<n;i++)
    printf("array %d : %d \n",i,ptr[i]);


}