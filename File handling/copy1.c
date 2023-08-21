#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    FILE *fp1,*fp2;
    char name[100];
    printf("enter the name ");
    gets(name);
    fp1=fopen("hello.txt","w");
    fprintf(fp1,"%s",name);
    fclose(fp1);

    fp1=fopen("hello.txt","r");
    char copy[100];
   fscanf(fp1,"%s",&copy);
    fclose(fp1);
    fp2=fopen("hello1.txt","w");
    fprintf(fp2,"%s",copy);
    fclose(fp2);
    printf("the file has been succesfully copied");
return 0;
    
}