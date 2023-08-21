#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[5];
    int i;
   
    for(i=0; i<5; i++){
       printf("enter the elements");
        scanf("%d",&arr[i]);
      
    }
    for(i=0; i<5; i++){
          printf("%d \t",arr[i]);
    }
    return 0;
}