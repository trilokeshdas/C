#include<stdio.h>
#include<stdlib.h>

int main(){
    int a[5];
    for(int i=0; i<5; i++){

        a[i]= i*i;
        printf("%d\n",a[i]);
    }
    return 0;
}