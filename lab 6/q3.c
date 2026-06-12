#include <stdio.h>
int summation(int);
int summation(int n){
    if (n==1)
    return 1;
    else 
    return n+summation(n-1);
}
int main(){
    int n;
    printf("Enter the Number: ");
    scanf("%d",&n);
    printf("summation of first %d natural no.s is %d",n,summation(n));
    return 0;
}