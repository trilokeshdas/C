#include<stdio.h>
#include<stdlib.h>

int fibo(int i);
int main(){
    int i,n;
    printf("enter the number of elements");
    scanf("%d",&n);
    for(i=0; i<n; i++){
        fibo(i);
        printf("%d",fibo(i));
     
    }
    return 0;
}

int fibo(int i){
if(i==0){
    return 0;
}
else if(i==1){
    return 1;
}
else{
    int fibon= fibo(i-1)+ fibo(i-2);
    return fibon;
}
}