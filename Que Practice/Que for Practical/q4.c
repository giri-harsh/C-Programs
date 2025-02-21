#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int fact(int n){
    if (n==1){
        return 1;
    }
    // int prev = n*fact(n-1);
    // return prev;
    return n*fact(n-1);


}

int main(){
    int n;
    scanf("%d",&n);
    printf("Fact : %d",fact(n));
}