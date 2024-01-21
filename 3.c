#include <stdio.h>

int main()
{
    int array[30], i, n, sum = 0;
    float avg;
    printf("Calculate the average of the Array's\n");
    printf("-------------------------------------------\n");
    printf("Enter The Number of Elements of the Array\n");
    scanf("%d", &n);
    printf("Enter The Values in The Array\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter %d Element- ", i);
        scanf("%d", &array[i]);
    }

    for (i = 0; i < n; i++)
    {
        sum += array[i];
    }
    avg = sum / n;
    printf("The Average Of the Values of the Array is %f \n", avg);

    return 0;
}