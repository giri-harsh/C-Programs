#include <stdio.h>
int main(){
    int n;
    int key;
    printf("hhjk\n");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++)
    scanf("%d",&arr[i]);

    //searching
    printf("Enter key\n");
    scanf("%d",&key);

    for (int i=0;i<n;i++){
        if (key==arr[i])
            printf("Element found %d at %d ",arr[i],i+1);
    }
}