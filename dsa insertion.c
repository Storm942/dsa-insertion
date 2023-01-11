#include<stdio.h>
int display(int arr[],int n)
{
    for(int i=0;i<n,i++)
    {
        printf("%d",arr[i]);    
    }
    printf("\n");
}
int insert(int arr[],capacity,int index,int size,int element){
    if(size>=capacity){
        return -1;
    }
    for(int i=size-1;i>=index;i--){
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    return 1;

}
int main(){
    int arr[100]={2,18,54,6,8};
    int size=5,element=42,index=2;
    display(arr,size);
    insert(arr,100,index,size,element);
    size=size+1;
    display(arr,size)
    return 0;
}
