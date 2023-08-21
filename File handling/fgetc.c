#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    FILE *fp;
    char c;
    fp=fopen("fgetc.txt","r");
    c=fgetc(fp);
     //c=fgetc(fp);the number of times we use fgetc for a particular variable, the value of the variable is read as the next value in the file
    printf("%c\n",c);
    // while(c!=EOF){
    //     printf("%c",c);
    //     c=fgetc(fp);// the value of c changes continuously till the value become EOF
    // }
    
}