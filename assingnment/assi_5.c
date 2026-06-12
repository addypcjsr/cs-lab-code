#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    while (str[i] != '\0')
    {
        int c = 0, j = 0;
        while (str[j] != '\0')
        {
            if (str[i] == str[j])
                c++;
            j++;
        }
        if (c == 1)
            printf("%c ", str[i]);
        i++;
    }
    return 0;
}