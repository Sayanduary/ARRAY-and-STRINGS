#include <stdio.h>

int main()
{
    int ar[10], i, n, toSearch, found = 0;
    printf("Enter the numbner of Elementys\n");
    scanf("%d", &n);
    printf("Enter The Elements in Array\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter %d Element- ", i);
        scanf("%d", &ar[i]);
    }
    printf("Enter The Number For Searching....\n");
    scanf("%d", &toSearch);
    for (i = 0; i < n; i++)
    {
        if (ar[i] == toSearch)
        {
            found = 1;
            break;
        }
    }
    if (found == 1)
    {
        printf("%d is Found At the position of [%d]\n", toSearch, i);
    }
    else
    {
        printf("%d is Not Found\n", toSearch);
    }
    return 0;
}