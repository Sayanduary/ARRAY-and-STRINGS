#include<stdio.h>

int main(){
int array[50],i,n;
printf("Store Values in Array Display in Reverse Ordee\n");
printf("--------------------------------------------\n");
printf("Enter The number of elements of Array\n");
scanf("%d",&n);
for(i=0;i<n;i++){
    printf("Enter %d Element- ",i);
    scanf("%d",&array[i]);
}
printf("\n\nBefore Reverse The Elements Will look Like.....\n");
for(i=0;i<n;i++){
    printf("% 5d",array[i]);
}
printf("\n\nIn Reverse Order The Elements Will look Like.....\n");
for(i=n-1;i>=0;i--){
    printf("% 5d",array[i]);
}
    return 0;
}