#include <stdio.h>

int main(){
    printf(" 1: Area of circle\n");
    printf(" 2: Area of rectangle\n");
    printf(" 3: Area of square\n");
    printf("Enter Choice\n");
    int a,b;
    scanf("%d",&a);
    switch(a){
        case 1:
            printf("Enter the radius");
            scanf("%d",&a);
            printf("Area of circle = %f",3.14*a*a);
            break;
        case 2:
            printf("Enter length and breadth");
            scanf("%d %d",&a,&b);
            printf("Area of rectangle = %d",a*b);
            break;
        case 3:
            printf("Enter the side");
            scanf("%d",&a);
            printf("Area of square = %d",a*a);

    }
    return 0;
}