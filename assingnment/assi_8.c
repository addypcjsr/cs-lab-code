#include <stdio.h>

int main()
{
    char str[100];
    int a;
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    a = 'a';
    for (int i = 0; str[i] != 0; i++)
    {
        printf("%c - %d\n", str[i], str[i] - a);
    }
    return 0;
}