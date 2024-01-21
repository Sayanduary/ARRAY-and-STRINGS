#include <stdio.h>

int main()
{
    int ar[40], i, n;
    printf("Enter Elements in the Array and Print Them\n");
    printf("------------------------------------------\n");
    printf("Enter the number of Elements \n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Elements %d - ", i);
        scanf("%d", &ar[i]);
    }
    printf("\n\nElements Are :\n");
    for (i = 0; i < n; i++)
    {
        printf("%5d", ar[i]);
    }
    printf("\n\n");
    return 0;
}