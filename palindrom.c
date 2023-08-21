#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
   int r,num,n,sum=0;
   printf("enter any number");
   scanf("%d",&num);
    n=num;
    while(n>0){
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    if(num==sum){
        printf("it is a palindrome");
    }else{
        printf("it is not");
    }

return 0;
}