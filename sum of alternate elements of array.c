#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    //sum of alr elements
    int sum=0;
    for (int i=0;i<n;i++){
        sum = sum + arr[i];
        i++;
     }
     printf("\n Sum : %d",sum);
}
