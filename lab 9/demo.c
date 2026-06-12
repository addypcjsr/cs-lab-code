#include <stdio.h>

int main(){
    int a[]={10,20,40,17};
    for (int i=0;i<4;i++){
        int *p = &a[i];
        printf("%d ",*p);
    }

    return 0;
}