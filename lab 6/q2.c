#include <stdio.h>
int reverse(int);
int reverse(int n){
    int rev=0;
    while(n!=0){ 
    int digits =n%10;
    rev=rev*10+digits;
    n=n/10;
}
return rev;
}
int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    printf("Reversed number: %d",reverse(n));
    return 0;
}