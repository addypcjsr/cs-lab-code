#include <stdio.h>

int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Armstrong numbers between 1 and %d are: ",n);   
    for(int i=1;i<=n;i++){ // to run the no.s from 1 till entered no.
        int p=i;int a=i;
        int j=0;int b=1;
        while (p!=0){
            p=p/10;
            j++; //counting of digits
        }
        int sum=0;
        for (int m=1;m<=j;m++){ // ek ek digit ko seperate krna hai, starting from 1 bcz digits count krte time jwas started from 1 
            b=a%10;
            a=a/10;
            int d=1;
            for (int c=1;c<=j;c++){ // powering the digits to equal to total digits
                d=d*b;
            }
            sum=sum+d; // summing the power of digits
        }
        if (sum==i){
            printf("%d ,",i); // ek no. finally check hua
        }
    } // ab new no. ke saath saara variable wapas se reset hoga and checking hoga
    return 0;
}