#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void print1(int n);
void print2(int n);
void print3(int n);

int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    print1(n);
    print2(n);
    print3(n);
    return 0;
    
    }
    void print1(int n){
        int i,s=0;
        for(i=1; i<=n; i++){
            s=s+i*i;
             
        }
        printf("the sum of first n*n natural number is: %d \n",s);
    }

    void print2(int n){
        int i,s=0;
        for(i=1; i<=n; i++){
            s=s+i*i*i;
        }
        printf("the sum of n cube is %d \n",s);
    }

    void print3(int n){
        int i,fac=1;
        for(i=1; i<=n; i++){
            fac=fac*i;
            printf("%d\n",fac);
        }
    }