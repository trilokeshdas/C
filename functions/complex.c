#include<stdio.h>
#include<stdlib.h>

void complexadd(int r1, int r2, int i1, int i2);
void complexsub(int r1, int r2, int i1, int i2);
void complexmul(int r1, int r2, int i1, int i2);

int main(){
    int r1,r2,i1,i2;
    printf("enter r1");
    scanf("%d",&r1);
    printf("enter r2");
    scanf("%d",&r2);
    printf("enter i1");
    scanf("%d",&i1);
    printf("enter i2");
    scanf("%d",&i2);

    printf("Z! and Z2 are two complex numbers\n");
     complexadd(r1,r2,i1,i2);
     complexsub(r1,r2,i1,i2);
     complexmul(r1,r2,i1,i2);

    return 0;

}

void complexadd(int r1, int r2, int i1, int i2){
    printf("Z1+Z2= %d + %di\n", r1+r2, i1+i2);
}

void complexsub(int r1, int r2, int i1, int i2){
    printf("Z1-Z2= %d + %di \n", r1-r2, i1-i2);
}

void complexmul(int r1, int r2, int i1, int i2){
    printf("Z1*Z2= %d + %di \n", r1*r2-i1*i2, r1*i2+i1*r2);
}

