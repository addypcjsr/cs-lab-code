#include <stdio.h>
#include <ctype.h>
int main(){
    int i=0,v=0,c=0;
    char a[100],b;
    printf("Enter a string: ");
    scanf("%s",a);
    while (a[i]!='\0'){
        if(isalpha(a[i])){ 
            b = tolower(a[i]);
            if (b=='a'||b=='e'||b=='i'||b=='o'||b=='u')
                v++;
            else
                c++;}
        i++;
    }
    printf("vowels = %d \nconsonants = %d",v,c);
    return 0;
}