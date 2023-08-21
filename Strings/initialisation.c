#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char str[6]={'H','E','L','L','O','\0'};
    printf("%s\n",str);
    puts(str);
    return 0;

    // char str[6];
    // printf("enter the string");
    // scanf("%[^\n]",str); // to input multi word strings withs spaces using scanf because in scanf only one word is printed 
    // //gets(str);
    // puts(str);
    // return 0;
}