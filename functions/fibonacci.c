#include<stdio.h>
#include<stdlib.h>

void fibo(int n);
int main(){
    int n;
    printf("enter the the number of elements");
    scanf("%d",&n);
    fibo(n);
    return 0;
}
void fibo(int n){
    int n1=0,n2=1,n3,i;
    printf("%d \t %d \t",n1,n2);
    for(i=2; i<n; i++){
        n3=n1+n2;
        printf("%d \t",n3);
        n1=n2;
        n2=n3;

    }


}