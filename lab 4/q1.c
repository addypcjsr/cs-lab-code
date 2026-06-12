#include <stdio.h>

int main(){
    int p,a,b,c;
    printf("ENter Three NUmbers ");
    scanf("%d %d %d",&a,&b,&c);
    //(a>b)?((a>c)?printf("%d is largest",a):printf("%d is largest",c)):((b>c)?printf("%d is largest",b):printf("%d is largest",c));
    p=(a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("%d is largest",p);
    return 0;
}