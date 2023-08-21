#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int i,n,a=0,b=0,c=0,temp;
    printf("enter the decimal number");
    scanf("%d",&n);
    temp=n;
    while(temp>0){
        temp=temp/2;
        c++;
    }
    //to convert decimal to binary
    int r[c];
    for(i=0;i<c;i++){
        r[i]=n%2;
        n=n/2;
    }
    for(i=c-1;i>=0;i--){
        printf("%d",r[i]);
    }
    printf("\n");
    //to convert binary to decimal
    for(i=0;i<c;i++){
        a=a+r[i]*pow(2,i);
    }
    printf("the decimal of the binary is %d",a);
    printf("\n");
    //to convert reversed binary to decimal
    // for(i=0;i<c;i++){
    //     b=b+r[c-1-i]*pow(2,i);
    // }
    // printf("the decimal of reversed binary is %d",b);
    return 0;

}