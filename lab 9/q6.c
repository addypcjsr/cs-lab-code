#include <stdio.h>
int main(){
    int a[] = {2, 0, 5}; int *p = a;
     if (*p && *++p || *p++)
         printf("%d %d", *p, *(p-1));
    return 0;
}