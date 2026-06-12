#include <stdio.h>
#include <ctype.h>

int main()
{
    char a[100];
    int i = 0, vwl = 0, cons = 0, digit = 0, spcl = 0;
    printf("Enter a string ");
    // fflush(stdout);
    scanf("%[^\n]", a);
    while (a[i] != '\0')
    {
        char p = tolower(a[i]);
        if (isalnum(p))
        {
            if (p == 'a' || p == 'e' || p == 'i' || p == 'o' || p == 'u')
                vwl++;
            else if (isdigit(p))
                digit++;
            else
                cons++;
        }
        else
            spcl++;
        i++;
    }
    printf("Vowels = %d \nConsonants = %d \nDigits = %d \nSpecial Characters = %d\n", vwl, cons, digit, spcl);
    return 0;
}