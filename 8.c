#include <stdio.h>

int main()
{
    int a[3][3], b[3][3], c[3][3], i, j;
    printf("Enter The Value of 1st Matrix: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter value of [%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter The Value of 2nd Matrix: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter value of [%d][%d] = ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    printf("Adding two Matrices: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d \t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}