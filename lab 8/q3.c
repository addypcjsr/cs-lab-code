#include <stdio.h>

int main(){
    int i=0;
    char a[100],b;
    printf("Enter a string: ");
    scanf("%s",a);
    printf("Enter character to search: ");
    scanf(" %c",&b);
    while (a[i]!='\0'){
        if (b==a[i])
            printf("Character found at position %d\n",i+1);
        i++;
    }
    return 0;
}