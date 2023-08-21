#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,n;
        printf("the size of array");
        scanf("%d",&n);
        int arr[n];
    for(i=0; i<n; i++){
    printf("enter the elements");
    scanf("%d",&arr[i]);
    }
    int max= arr[0];
    for(i=0; i<5; i++){
        if(arr[i]>=max){
            max=arr[i];
        }
    }
    printf("the max element is %d",max);
    return 0;
}