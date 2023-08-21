#include<stdio.h>
#include <stdlib.h>
int op(int *a, int *b);
int main(){
    int a,b;
    printf("enter the value of a ");
    scanf("%d",&a);
    printf("enter the value of b ");
    scanf("%d",&b);
    op(&a,&b);
    return 0;
 
}
int op( int *a, int *b){
    int sum= *a+*b;
    float avg= (float)(*a+*b)/2; // typecasting bcoz int/int will give integer so typecasting of float
    printf("%d\n",sum);
    printf("%f",avg);
}
