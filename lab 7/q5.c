#include <stdio.h>

int main(){
    int arr[5];
    printf("Enter Array Elements: ");
    for (int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0],note=0;
    for (int j=0;j<5;j++){
        if (max<arr[j]){ 
            max=arr[j];
            note =j;}
    }
    max=arr[0];
    for (int k=0;k<5;k++){
        if(k!=note){ 
        if (max<arr[k]){ 
            max=arr[k];
        }}
    }
    printf("The second largest element is %d",max);
    return 0;
}