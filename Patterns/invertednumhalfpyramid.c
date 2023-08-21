#include<stdio.h>
#include<stdlib.h>

int main(){
    int i,j,n;
    printf("enter n:");
    scanf("%d",&n);
    for(i=n; i>=1; i--){
        for(j=1; j<=i; j++){
            printf("%d",j);
        }
        printf("\n");
    } // pattern of similar numbers
    printf("\n");
     for(i=n; i>=1; i--){
        for(j=1; j<=i; j++){
            printf("%d",i);
        }
        printf("\n");
    }
}