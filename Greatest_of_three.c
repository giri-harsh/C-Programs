#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    while (a>=0&&b>=0&&c>=0){
    if (a >= b && a >= c) {
        printf("The greatest number is: %d\n", a);
        break;
    } else if (b >= a && b >= c) {
        printf("The greatest number is: %d\n", b);
        break;
    } else {
        printf("The greatest number is: %d\n", c);
        break;
    }

 
}
}