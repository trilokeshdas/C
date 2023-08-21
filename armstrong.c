#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
    int num,n,r,sum=0;
     printf("enter any number");
   scanf("%d",&num);
   n=num;
   while(n>0){
    r=n%10;
    sum=sum+(r*r*r);
    n=n/10;
   }
   if(sum==num){
    printf("it is an armstrong number");
   }
   return 0;
}