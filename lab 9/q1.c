#include <stdio.h>

int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    int *p = &a;
    printf("Value = %d\nAddress = %u",*p,p);
    return 0;
}