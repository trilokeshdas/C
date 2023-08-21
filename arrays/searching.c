#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    call:
    printf("search any number from 1 to 10\n");
    scanf("%d",&n);
    for(int i=0;  i<10;i++){
        if(arr[i]==n){
            printf("the position of the number is = %d\n",i+1);
        }
    }
    
    goto call;
    return 0;

}