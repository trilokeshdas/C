#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a;
    int b;
    int c;
    printf("enter b");
    scanf("%d",&b);
    printf("enter c ");
    scanf("%d",&c);
    a=(b<c)?10:20;
    printf("a=%d",a);

    return 0;
}

