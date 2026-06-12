#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100];
    int c = 0;
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    for (int i = 0; str[i] != 0; i++)
    {
        if (str[i] == ' ')
        {
            printf(" ");
            continue;
        }
        if (c % 2 == 0)
            printf("%c", toupper(str[i]));
        else
            printf("%c", tolower(str[i]));
        c++;
    }
    return 0;
}