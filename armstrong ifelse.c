#include<stdio.h>
#include<math.h>

int main(){

    int m,n,o;
    printf("m ");
    scanf("%d",&m);
       printf("n ");
    scanf("%d",&n);
       printf("o ");
    scanf("%d",&o);

    int x=pow(m,3)+pow(n,3)+pow(o,3);
    int y=100*m+10*n+o;

    if(x==y){
        printf("it is armstrong number");
    }else{
        printf("it is not");
    }return 0;
}