#include <stdio.h>

int main(){
    int n,a=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for (int i=1; i<n;i++){
        if (n%i==0)
            a=a+i;
    }
    (a==n)?printf("%d is a Perfect number.",n):printf("not a Perfect number.");
    return 0;
}