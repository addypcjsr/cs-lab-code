#include <stdio.h>

int main(){
    int arr[5];
    printf("Enter Array Elements: ");
    for (int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    int sum= 0;
    for (int j=0;j<5;j++){
        sum+=arr[j];}
    printf("Sum of array elements: %d",sum);
    printf("Average of array elements: %f",(float)sum/5);
    return 0;
}