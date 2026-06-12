#include <stdio.h>
int bin(int,int,int arr[],int);
int bin(int l,int h,int arr[],int key){
    int mid=(l+h)/2;
    if(l>h)
        return -1;
    if (key==arr[mid])
        return mid;
    else if (key>arr[mid])
       bin(mid+1,h,arr,key);
    else 
        bin(l,mid-1,arr,key); 
}
int main(){
    int n,key,c=0;
    printf("enter no. of elements");
    scanf("%d",&n);
    int arr[n];
    printf("enter sorted elements : ");
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter key to search: ");
    scanf("%d",&key);
    c=bin(0,n-1,arr,key);
    if(c==-1)
        printf("element not found");
    else
        printf("element found at position %d",c+1);
    return 0;
}