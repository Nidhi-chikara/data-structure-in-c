#include<stdio.h>
int linearSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i] == key){
            return i;
        }

    }
    return -1;
}
int main(){
    int arr[50],n,key,result;
    printf("enter number of elements : ");
    scanf("%d",&n);
    printf("enter array elements :\n ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter element to search : ");
    scanf("%d",&key);
    result = linearSearch(arr,n,key);
    if(result!=-1){
        printf("element found at position %d \n",result);
    }
    else{
        printf("element not found");
    }
    return 0;
}