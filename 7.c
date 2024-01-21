// Sort Elements in Ascending Order
#include <stdio.h>

int main()
{
    int a[5], i, j, temp;
    printf("Enter Array Elements: \n");
    for (i = 0; i < 5; i++)
    {
        printf("Enter %d Element :  ", i);
        scanf("%d", &a[i]);
    }
    printf("Now The Elements Are : \n");
    for (i = 0; i < 5; i++)
    {
        printf("% 5d ", a[i]);
    }
    printf("\n\nConverting into Ascending Order \n");
    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Now The Elements Are : \n");
    for (i = 0; i < 5; i++)
    {
        printf("% 5d ", a[i]);
    }
    return 0;
}