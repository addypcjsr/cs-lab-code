#include <stdio.h>

int main(){
    int arr[10];
    printf("Enter Array Elements: ");
    for (int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    int visited[10]={0};
    for(int j=0;j<10;j++){
        int count=0;
        if(visited[j]==1)
            continue;
        else
            for (int k=0;k<10;k++){
            if (arr[j]==arr[k]){
                count++;
                visited[k]=1;
            }
        }
        printf("%d -%d\n",arr[j],count);
    }
    return 0;
}