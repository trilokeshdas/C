#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a;
    printf("enter a");
    scanf("%d",&a);

    if(a>=0){
        printf("it is a postive number\n");
        if(a%2==0){
            printf(" it is an even number\n");
        
        } else{
            printf("it is an odd number\n");
        }
    } 
    else{
        printf("it is a negative number\n");
        if(a%2==0){
            printf(" it is an even number\n");
        
        } else{
            printf("it is an odd number\n");
        }
    }
    return 0;
}