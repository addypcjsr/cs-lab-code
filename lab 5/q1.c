#include <stdio.h>

int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int 
    j=0;
        while (n!=0){
            n=n/10;
            j++; //counting of digits
        }
    printf("no. of digits : %d",j);
    return 0;
}