#include <stdio.h>
void bin(int);
void bin(int n){
    int bit[8];
    for(int i=0;i<8;i++){ 
        if (n!=0){ 
            bit[i]=n%2;
            n=n/2;
        }
        else
            bit[i]=0;
    }
    printf("Binary: ");
    for (int j=7;j>=0;j--){
        printf("%d",bit[j]);
    }
}
int main(){
    int n;
    printf("Enter a decimal number: ");
    scanf("%d",&n);
    bin(n);
    return 0;
}