#include<stdio.h>
#include<stdlib.h>
int main(){
    int i;
    float *ptr;
    ptr=(float*)calloc(5,sizeof(float));
    for(i=0; i<5;i++){
         printf("enter tyhe numbers");
        scanf("%f",&ptr[i]);

    }
    for(i=0;i<5;i++){
        printf("%f\n",ptr[i]);
    }
    return 0;

}