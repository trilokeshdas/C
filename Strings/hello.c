#include<stdio.h>
#include<stdlib.h>

int main(){
    char str[100];
    printf("enter the string");
    scanf("%[^\n]",str);
    for(int i=0;str[i]!='\0';i++){
        printf("%c\t",str[i]);
    }
    return 0;
}