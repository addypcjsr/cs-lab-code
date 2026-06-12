#include <stdio.h>

int main(){
    int n,a=1;
    printf("enter the no of rows :");
    scanf("%d",&n);
    for (int i=1;i<n;i++){
        int a=1,b;
        for (int j=0;j<i;j++){
            printf("%d",a);
            b=a*((i-j)/(j+i));
            a=b;
        }
        printf("\n");
    }
    return 0;
}