#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Enter The String \n");
    scanf("%s", str);
    printf("Reverse string will be : %s\n", strrev(str));
    return 0;
}