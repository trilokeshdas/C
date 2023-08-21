#include<stdio.h>
#include <stdlib.h>
void mul(int *a);
int main(){
    int a=10;
    printf("%d\n",a);
    mul(&a);
    printf("%d",a);
    return 0;

}
void mul(int *a){ //changing trhe variable to ten times
    *a=10*(*a);
}