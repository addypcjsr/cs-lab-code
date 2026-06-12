#include <stdio.h>

int main(){
    int i,b;
    printf("enter the no :");
    scanf("%d",&i);
    for (int n=1;n<=i;n++){ 
    int sum=0;
    int d1 =n;int d2=n;
    int digits=0;
    while (d1!=0){
        d1=d1/10;
        digits++;
    }
    for(int i=digits;i>0;i--){
        int a=1;
        b=d2%10;
        d2=d2/10;
        for (int j=1;j<i;j++){
            a=a*10;
        }
        b=b*a;
        sum =sum+b;
    }
    if (sum==n){
        printf("%d is a palindome\n",n);
    }
}
    return 0;
}