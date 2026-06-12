#include <stdio.h>

int main(){
    float a,b;
    char d;
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c",&d);
    printf("Enter two operands: ");
    scanf("%f %f",&a,&b);
    switch (d)
    {
    case '+':
        printf("%f + %f = %f",a,b,a+b);
        break;
    case '*':
        printf("%f * %f = %f",a,b,a*b);
        break;
    case '-':
        printf("%f - %f = %f",a,b,a-b);
        break;
    case '/':
        printf("%f / %f = %f",a,b,a/b);    
        break;
    }
return 0;
}