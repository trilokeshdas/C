#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    int s=0;
    printf("enter n");
    scanf("%d",&n);
    for(int i=50; i>=5; i--){
    s=s+i; //sum of nos between 5 and 50
    if(i%2!=0){
        continue;
    }else{
        printf("the nos are even"); // checking nos are even or odd
    }
    printf("%d\n",i);
       
    }
     printf("%d\n",s);
    
    return 0;
}