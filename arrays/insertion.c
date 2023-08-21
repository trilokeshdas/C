#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[100]={1,2,3,4,5,6};
    int i,n,value,position;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the position of the new element to be added");
    scanf("%d",&position);
    printf("enter the value of the new element");
    scanf("%d",&value);
    for(i=n-1; i>=position-1; i--){
        arr[i+1]=arr[i];
    }
    arr[position-1]=value;
    for(i=0; i<=n;i++){
    printf("%d\t",arr[i]);
    }
    return 0;
}
