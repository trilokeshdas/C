#include<stdio.h>
#include<stdlib.h>
int main(){
    int i;
    int *ptr;
    ptr=(int *)malloc(5*sizeof(int));
    for(i=0;i<5;i++){
        printf("enter tyhe numbers");
        scanf("%d",&ptr[i]);
        free(ptr);

    }
    for(i=0;i<5;i++){
        printf("%d\n",ptr[i]);
    }
    return 0;
}