#include <stdio.h>

int main(){
    int n;
    printf("enter the no :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("*");
    }
    printf("\n");
    for(int j=1;j<=n-2;j++){
        printf("*");
        for(int c=1;c<=n-2;c++){
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
    for(int d=1;d<=n;d++){
        printf("*");
    }
    return 0;
}