#include<stdio.h>
#include<stdlib.h>

int main(){
    int i,j,n;
    printf("enter the number of rows"); // here n is the number between 65 to 90
    scanf("%d",&n);
    // input n upto 90 for upper case characters
    for(i=65; i<=n; i++ ){
        for(j=65; j<=i; j++){
            printf("%c",i);
        }
        printf("\n");
    }
    printf("\n");
// input n upto 90 for upper case characters
    for(i=65; i<=n; i++){
        for(j=65; j<=i; j++){
            printf("%c",j);
        }
        printf("\n");
    }
   return 0;
   
}