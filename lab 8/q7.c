#include <stdio.h>

int main(){
    int n,a,c=0;
    printf("enter no. of elements");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements : ");
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter key to search: ");
    scanf("%d",&a);
    for (int j=0;j<n;j++){
        if (arr[j]==a){ 
            c++;
            printf("element found at position %d",j+1);}
    }
    if(c==0)
        printf("element not found");
    return 0;
}