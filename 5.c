#include<stdio.h>

int main(){
    int ar[10],i,n,large,small;
    printf("Enter the numbner of Elementys\n");
    scanf("%d",&n);
    printf("Enter The Elements in Array\n");
    for(i=0;i<n;i++){
        printf("Enter %d Element- ",i);
        scanf("%d",&ar[i]);
    }
    large=small=ar[0];
    for(i=0;i<n;i++){
        if(small>ar[i]){
            small=ar[i];
        }
        if(large<ar[i]){
            large=ar[i];
        }
}
printf("Largest element is : %d\n", large);
printf("Smallest element is : %d\n", small);

 return 0;
}