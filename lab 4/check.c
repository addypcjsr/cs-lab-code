#include <stdio.h>
#include<ctype.h>
#include<stdbool.h>

int main(){
    int a;bool c;
    scanf("%d",&a);
    c= isdigit('a');
    printf("%d \n",a);
    printf("%d \n",c);
    printf("%c \n",a);
    printf("%c",c);
    return 0;
}