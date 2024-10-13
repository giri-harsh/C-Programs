#include<stdio.h>
int main(){
    int n;
    printf("\n Enter Number of elements");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i = 0;i<n;i++){
        printf("\n %d",arr[i]);
    }
}