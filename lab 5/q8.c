#include <stdio.h>

int main(){
    int n;
    printf("enter the no :");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        for (int a=n-i;a<n;a++){
            printf(" ");
        }
        for(int j=n+1-i;j>0;j--){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}