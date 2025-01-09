#include <stdio.h>
// 1
// 4 9 
// 16 25 36
// 49 64 81 100
int main(){
    int k=1;
    for (int i=1;i<=10;i++){
        for (int j=1;j<=i;j++){
            printf("%d ",k*k);
            k++;
        }
        printf("\n");
    }
}
