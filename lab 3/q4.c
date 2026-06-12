#include <stdio.h>

int main()
{
    char a;
    printf("enter a character: ");
    scanf("%c", &a);
    int b = a;
    if (b==65||b==69||b==73||b==79||b==85||b==97||b==101||b==105||b==111||b==117)
        printf("%c is a vowel.",a);
    else
        printf("%c is a consonant.",a);
    return 0;
}