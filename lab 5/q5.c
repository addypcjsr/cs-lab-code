#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    for (int i=1;i<=a;i++){
        if (a%i==0){
            if(b%i==0){
                c=i;
            }
        }
    }
    printf("%d is gcd",c);
    return 0;
}