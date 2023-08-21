#include<stdio.h>
#include<math.h>

int main()
{
    int a;
    printf("enter the mark");
    scanf("%d",&a);

    if(a>30 && a<=100){
        printf("PASS");

    }
    else if(a<=30 && a>=0){
        printf("FAIL"); 
    }
    else{
        printf("wrong marks");
    }
return 0;
}