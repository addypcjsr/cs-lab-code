#include <stdio.h>

int main(){
    int arr[5];
    printf("Enter Array Elements: ");
    for (int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("Reversed array: ");
    for(int j=4;j>=0;j--){
        printf("%d ",arr[j]);
    }
    return 0;
}