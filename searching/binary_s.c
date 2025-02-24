#include <stdio.h>
int main(){
    int n;
    printf("fghj\n");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++)
    scanf("%d",&arr[i]);

    int key;
    printf("key\n");
    scanf("%d",&key);

    //logic 
    int s=0;
    int e=n-1;
    while (s<=e){
        int mid = (s+e)/2;
        if (arr[mid]==key){
            printf("Element found at %d",mid);
            break;
        }
        else if (arr[mid]>key){
            e = mid-1;
        }
        else 
        s=mid+1;
    }   
 
}