#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    int a, b;
    printf("Enter a number : ");
    scanf("%d", &a);
    if (isdigit(a))
    {
        b = abs(a);
        if (a != 0)
            a = a / b;
        switch (a)
        {
        case 1:
            printf("positive number");
            break;
        case -1:
            printf("negative number");
            break;
        default:
            printf("zero");
        }
    }
    else
        printf("special character");
    return 0;
}