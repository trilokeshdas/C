#include<stdio.h>
#include<stdlib.h>

int main()
{
    char ch;
    printf("enter character");
    scanf("%c",&ch);

    if(ch>=65 && ch<=90){
        printf("Upper case");
    }
    else if(ch>=97 && ch<=122){
        printf("Lower case");
    }else{
        printf("not an english alphabet");
}

    return 0;
}