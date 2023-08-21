#include <stdlib.h>
#include <stdio.h>
int main(){
    int i,j;
    int a[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    for(i=0; i<3; i++){
        for(j=0; j<4;j++){
            printf("\ta[%d][%d]=%d\t",i+1,j+1,a[i][j]);
            if(j==3){
                printf("\n");
            }
        }
    }
return 0;
}
