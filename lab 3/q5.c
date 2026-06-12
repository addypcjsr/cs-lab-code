/* add white space before %c in scan f otherwise it will read \n from previous scanf as a character ,
 that space tells scanf to ignore white spaces (space, tab, newline)*/

#include <stdio.h>

int main(){
    float a,b;
    char d;
    printf("Enter two operands: ");
    scanf("%f %f",&a,&b);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c",&d);
    if(d=='+')
        printf("%f + %f = %f",a,b,a+b);
    else if(d=='*')
        printf("%f * %f = %f",a,b,a*b);
    else if(d=='-')
        printf("%f - %f = %f",a,b,a-b);
    else if(d=='/')
        printf("%f / %f = %f",a,b,a/b);
return 0;
}