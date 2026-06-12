#include <stdio.h>
int power(int,int);
int power(int a, int n){
    if (n==1){
        return a;
    }
    else
        return a*power(a,n-1);
}
int main(){
    int base,expo;
    printf("Enter base: ");
    scanf("%d",&base);
    printf("Enter the exponent: ");
    scanf("%d",&expo);
    printf("%d ^ %d = %d",base,expo,power(base,expo));
    return 0;
}