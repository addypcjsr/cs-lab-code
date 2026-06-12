#include <stdio.h>

int main(){
    int i=0;
    char a[100];
    printf("Enter a string: ");
    scanf("%s",a);
    while (a[i]!='\0'){
        for (int x=i+1;a[x]!=0;x++){
            if (a[i]==a[x]){
                for (int y=x;a[y]!=0;y++){
                    a[y]=a[y+1];
                }
            x--;
            }
        }
        i++;
    }
    printf("after removing duplicates: %s",a);
    return 0;
}