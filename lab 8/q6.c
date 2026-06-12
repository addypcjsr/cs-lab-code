#include <stdio.h>

int main(){
    int i=0;
    char a[100];
    printf("Enter a string: ");
    scanf("%s",a);
    while (a[i]!='\0'){
        if (a[i]==' '){
            for (int j=i+1;a[j]==' ';){
                for (int k=j;a[k]!='\0';k++){
                    a[k]=a[k+1];
                }

            }
        }
        i++;
    }
    printf("%s",a);
    return 0;
}