#include<stdio.h>
#include<stdlib.h>

int main(){
    int i,j,n;
    printf("enter n:");
    scanf("%d",&n);
    //1st pattern
    for(i=n; i>=1; i--){
        for(j=1; j<=i; j++){
            printf("*");
        }
    printf("\n");
    }
    // 2nd pattern
    for(i=n; i>=1; i--){
        for(j=1; j<=n; j++){
            if(j>n-i){
                printf("*");
            }
            else{
                printf(" "); //printing spaces
            }
        }
        printf("\n");
    }
    return 0;
}