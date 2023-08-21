#include <stdio.h>
#include <stdlib.h>
int main(){
 int n,i,j,s=0;
 printf("enter the value of n:"); // n is the value upto which we want to find the sum of all prime numbers
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        int c=0;
        for(j=1; j<=i; j++){
            if(i%j==0){
                c++;
            }

            }
            if(c==2){
                s=s+i;
        }
    }
    printf("the sum of all prime numbers is %d",s);

    return 0;
}