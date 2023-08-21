#include<stdio.h>
#include<stdlib.h>
int main(){
    int i;
    int *ptr;
    ptr=(int *)malloc(5*sizeof(int));
    for(i=0;i<5;i++){
        printf("enter tyhe numbers");
        scanf("%d",&ptr[i]);

    }
    for(i=0;i<5;i++){
        printf("%d\n",ptr[i]);
    }
    ptr=(int*)realloc(ptr,10*sizeof(int));
    for(i=0;i<10;i++){
        printf("enter tyhe numbers");
        scanf("%d",&ptr[i]);

    }
    for(i=0;i<10;i++){
        printf("%d\n",ptr[i]);
    }
    return 0;
}