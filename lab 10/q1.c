#include <stdio.h>
struct student{
    char name[50];
    int roll;
    int marks;
}s[3];
int main(){
    int top = 0;
    int i;
    for(i=0;i<3;i++){
        printf("Student %d",i+1);
        scanf("%s %d %d",s[i].name,&s[i].roll,&s[i].marks);    
    }
    for(int j=0;j<3;j++){
        if (s[j].marks>s[top].marks)
            top=j;    
    }
    printf("%s %d %d",s[top].name , s[top].roll ,s[top].marks);
    return 0;
}