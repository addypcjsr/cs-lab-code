#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    int len=0,max=0,start=0,maxstart;
    printf("enter sentence: ");
    gets(str);
    int n= strlen(str);
    for (int j=0; j<n;j++){
        if(str[j]!=' ')
            len++;
        else{ 
            if(len>max){ 
                max=len;
                maxstart=start;}
            len=0;
            start=j+1;}
    }
    if (len>max){ 
        max=len;
        maxstart = start;}
    printf("longest word: ");
    for (int k=maxstart;k<maxstart+max;k++){
        printf("%c",str[k]);
    }
    printf("\nlength: %d",max);
    return 0;
}