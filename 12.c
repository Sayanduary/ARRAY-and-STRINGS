#include <stdio.h>
#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    printf("Enter the 1st string\n");
    scanf("%s", str1);
    printf("Enter the 2nd string\n");
    scanf("%s", str2);
    if (strcmp(str1, str2) == 0)
    {
        printf("Same String\n");
    }
    else
    {
        printf("Different String\n");
    }
    return 0;
}