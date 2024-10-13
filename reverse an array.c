#include<stdio.h>
int main(){
    int n;
    printf("\n ENter no of elements");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    //reverse an array
    for (int i =n-1;i>=0;i--){
        printf("\n %d",arr[i]);
    }

}