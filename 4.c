#include <stdio.h>

int main()
{
    int ar1[10], ar2[10], i, n;
    printf("Enter The Elements and Copy one to Another Array\n");
    printf("--------------------------------------------------\n");
    printf("Enter The number of the Array:\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Elements %d - ", i);
        scanf("%d", &ar1[i]);
    }
    printf("Lets Copy the elements to Another Array\n");
    for (i = 0; i < n; i++)
    {
        ar2[i] = ar1[i];
    }
    printf("Before Copy the Elemnts was:\n");
    for (i = 0; i < n; i++)
    {
        printf("%5d", ar1[i]);
    }
    printf("\n\nAfter Copy the Elemnts was:\n");
    for (i = 0; i < n; i++)
    {
        printf("%5d", ar2[i]);
    }
    printf("\n\n");

    return 0;
}