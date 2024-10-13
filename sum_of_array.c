#include <stdio.h>
int main(){
    int n;
    printf("\n Enter number of elements");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n current array");
    for (int i =0;i<n;i++)
    printf("\n %d",arr[i]);
    //to find sum
    int sum=0;
    for (int i=0;i<n;i++){
        sum = sum + arr[i];
    }
    printf("\n Sum :%d",sum);
}