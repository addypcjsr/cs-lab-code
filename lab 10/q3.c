#include <stdio.h>
struct bankaccount{
    int accno;
    char name[50];
    int amt;
};
int main(){
    struct bankaccount c1 ={1001,"Ravi",12000};
    struct bankaccount c2 ={1002,"Meena",950};
    struct bankaccount* b1 =&c1;
    struct bankaccount* b2 =&c2;

    if (b1->amt >10000)
        b1->amt += b1->amt*0.05;
    if (b2->amt >10000)
        b2->amt += b2->amt*0.05;
    if (b1->amt <1000)
        b1->amt -=100 ;
    if (b2->amt <1000)
        b2->amt -=100 ;
    printf("%s updated balance %d\n",b1->name,b1->amt);       
    printf("%s updated balance %d",b2->name,b2->amt);       
    return 0;
}