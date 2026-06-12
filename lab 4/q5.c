#include <stdio.h>
#include <ctype.h>
int main(){
char b,a;
printf("Enter a character : ");
scanf("%c",&b);
if (isalpha(b)){
    a=tolower(b);
    /*if (a=='e'||a=='i'||a=='o'||a=='a'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
        printf("%c is a vowel",a);
    else
        printf("%c is a consonant",a);*/
    switch(a){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c is a vowel",b);
            break;
        default:
            printf("%c is a consonant",b);
    }
}
else
    printf("are gadha ! khali alphabet daalo na");  
return 0;
}
























































