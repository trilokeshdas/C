#include<stdio.h>
#include<stdlib.h>

int main(){
    int i,j,n; //n is the number of rows

    printf("enter the number of rows:");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    // think it as a rectangle having rows and columns and emiit the stars according to the pattern
    // Outer loop to handle number of rows
    for(i=1; i<=n; i++){
        // Inner loop to handle number of columns
        for(j=1; j<=n; j++){
            if(j<=n-i){
                // Printing spaces
                printf(" ");

            }
            else{
                 // Printing stars
                printf("*");
            }
        
        }
        printf("\n");
    }
    return 0; 
}