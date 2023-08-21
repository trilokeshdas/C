#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int c=0;
    char str[100];
    printf("enter string");
    scanf("%s",&str);
    for(int i=0; str[i]!='\0'; i++){
        c++;
    }
    printf("the length of the string is %d",c);
    return 0;
    
}