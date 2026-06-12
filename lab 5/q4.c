#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a=0, b=1,sum,i=0;
    do{ 
        printf("%d ",a);
        sum=a+b;
        a=b;
        b=sum;
        i++;
    }while(i<n);
    return 0;
}