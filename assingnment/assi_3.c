#include <stdio.h>

int main()
{
    int a, c = 0, count = 0, b, d;
    printf("Enter the number: ");
    scanf("%d", &a);
    int n = a;
    while (n != 0)
    {
        n = n / 10;
        c++;
    }
    n = a;
    for (int i = 1; i < c; i++)
    {
        b = n % 10;
        n = n / 10;
        d = n % 10;
        if (b > d)
        {
            count++;
        }
    }
    printf("Digits greater than the previous digit = %d", count);
    return 0;
}