#include <stdio.h>
int main()
{
    int cp, sp;
    printf("Enter Cost Price : \n");
    scanf("%d", &cp);
    printf("Enter Selling Price : \n");
    scanf("%d", &sp);
    int diff = cp - sp;
    if (cp > sp)
    {
        printf("Loss\n");
        printf("Loss of : %d\n", diff);
    }
    else
    {
        printf("Profit\n");
        printf("Profit of : %d\n", diff);
    }
}