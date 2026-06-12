#include <stdio.h>
struct time{
    int hour;
    int min;
    int sec;
}t1,t2;
int main(){
    int a=0,b=0,c=0;
    struct time t1={2,45,50};
    struct time t2={1,20,30};
        a=t1.hour+t2.hour;
        b=t1.min+t2.min;
        c=t1.sec+t2.sec;    
    while (c>60){
        c=c-60;
        b=b+1;
    }
    while(b>60){
        b=b-60;
        a=a+1;
    }
    struct time total={a,b,c};
    printf("%dhrs %dmin %dsec",total.hour,total.min,total.sec);
    return 0;
}