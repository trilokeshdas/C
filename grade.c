#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a, b, c, d, e;
    printf("enter a");
    scanf("%d",&a);
        printf("enter b");
    scanf("%d",&b);
        printf("enter c");
    scanf("%d",&c);
        printf("enter d");
    scanf("%d",&d);
        printf("enter e");
    scanf("%d",&e);

    int avg= (a+b+c+d+e)/5;

    if(avg>=90 && avg<=100){
        printf("Grade A");

    }
    else if(avg<90 && avg>=70){
        printf("Grade B");
    }
    else if(avg<70 && avg>=40){
        printf("grade C");
    }
    else{
        printf("grade D");
    } 
    return 0;
} 