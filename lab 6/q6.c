#include <stdio.h>

int main(){
    int n;
    printf("Enter n");
    scanf("%d",&n);
    int stars=0,row=1;
    for(int i=1;i<=( n*(n+1)/2);i++,stars++){
        if(stars==row){
            printf("\n");
            row++;
            stars=0;
        }
        printf("*");       
    }
    return 0;
}