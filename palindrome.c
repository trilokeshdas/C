#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
    int c=0;
    char name[100];
    printf("enter any string");
    scanf("%s",name);
    int length= strlen(name);
    for(int i=0; i<length; i++){
        if(name[i]=name[length-i-1]){
            
            c++;
        }
       
        }
        if(c==length){
            printf("it is a palindrome");
        }
    
    return 0;
}