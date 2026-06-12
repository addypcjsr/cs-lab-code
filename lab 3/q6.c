#include <stdio.h>

int main(){
    int a;float c;
    printf("Enter total units consumed: ");
    scanf("%d",&a);
    if (a<=50)
        c=a*0.50;        
    else if(a>50 && a<=150)
        c=(50*0.50)+((a-50)*0.75);
    else if(a>150 && a<=250)
        c=(50*0.50)+(100*0.75)+((a-50)*1.20);
    else if(a>250)
        c=(50*0.50)+(100*0.75)+(100*1.20)+((a-50)*1.50);
    c=c+(c*0.20);
    printf("Total Electricity Bill: Rs. %f",c);   
    return 0;
}