#include <stdio.h>
#include <stdlib.h>

void star(int n);
int main(){
    int n;
    printf("n:");
    scanf("%d",&n);
    star(n);
    return 0;
    
}

void star(int n){
    int i,j;
    for(i=1; i<=n; i++){
        for(j=1; j<=(2*i-1); j++){
            printf("*");
        }
        printf("\n");
    }
}