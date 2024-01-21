#include<stdio.h>
#include<string.h>

int main(){
char str[100];
int len;
printf("Enter The String \n");
scanf("%s",&str);
len=strlen(str);
printf("The length of the String is %d\n",len);
    return 0;
}