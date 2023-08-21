#include<stdio.h>
#include<math.h>
// we want to calculate the are square
int area(int n);
int main(){
    int c,n;
    printf("enter n");
    scanf("%d",&n);
    c=area(n);
    printf("The area of the sqquare is %d",c);
    return 0;
}

int area(int n){
    int d;
    d=n*n;
    return d;
}