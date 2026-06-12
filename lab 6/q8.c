#include <stdio.h>
int fib(int);
int fib(int n){
    if (n==1){return 0;}
    if (n==2){return 1;}
    else {return fib(n-1)+fib(n-2);}}
int main(){
    int n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    printf("the fibonacci term for n=%d is %d",n,fib(n));
    return 0;}