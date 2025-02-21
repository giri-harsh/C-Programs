#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }



    //logic

    for (int i=0;i<n;i++){
        int j=i-1;
        int current = arr[i];
        while (arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }



    for (int i=0;i<n;i++)
    printf("%d\n",arr[i]);
}