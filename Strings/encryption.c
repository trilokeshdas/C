#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char str[100];
    printf("enter string");
    //scanf("%s",str);
    gets(str);
    for(int i=0; str[i]!='\0';i++){
     str[i]=str[i]+100;
    }
    printf("%s",str);
    return 0;
}