#include<stdio.h>
#include<stdlib.h>

int main(){
    for(int i=1; i<22; i++){
        if(i%2==0){
            printf(" %d\n",i);
        }else{
            continue;
        }
    }
    return 0;
}
