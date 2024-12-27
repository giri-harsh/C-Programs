#include <stdio.h>
void print(int n){
    if (n==0)
    return;
    printf("Hello\n");
    print(n-1);
}
int main(){
    int n;
    scanf("%d",&n);
    print(n);
}