#include <stdio.h>

int main(){
    int arr[10];
    printf("Enter Array Elements: ");
    for (int i=0;i<=9;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for (int j=0;j<10;j++){
        if (max<arr[j])
            max=arr[j];
    }
    printf("%d",max);
    return 0;
}