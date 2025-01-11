#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    if (n >= 0 && n <= 999)
    {
        if (n <= 99)
        {
            printf("Number is two digit");
        }
        else
            printf("Number is 3 digit");
    }
    else
        printf("Enter a valid number");
}