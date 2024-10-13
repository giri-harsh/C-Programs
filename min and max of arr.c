#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    int min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i + 1])
            max = arr[i];
        else if (arr[i] > arr[i + 1])
            min = arr[i];
    }
    printf("\n Max : %d \n Min : %d", max, min);
}