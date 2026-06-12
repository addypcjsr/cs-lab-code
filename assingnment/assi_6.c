#include <stdio.h>

int main()
{
    char str[100];
    int c = 0;
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    for (int i = 0;; i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            printf("%d ", c);
            c = 0;
            if (str[i] == '\0')
                break;
        }
        else
            c++;
    }
    return 0;
}