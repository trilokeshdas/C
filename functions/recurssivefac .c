#include<stdio.h>
#include<math.h>

int fac(int i);

int main(){
    int i;
    printf("enter i");
    scanf("%d",&i);
   int c= fac(i);
   printf("%d",c);
    return 0;
}

int fac(int i){
    if(i==0){
        return 1;
    }else{
    int fact= i*fac(i-1);
    return fact;
    }
}