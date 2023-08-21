#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    FILE *fp;
    char name[100];
    int c=0;
    printf("enter any character");
    gets(name);
    fp=fopen("cal.txt","w");
    fputs(name,fp); //fprintf(fp,"%s",name);
    fclose(fp);
    fp=fopen("cal.txt","r");
    char count[100];
    fscanf(fp,"%s",&count);
    fclose(fp);
    for(int i=0; count[i]!='\0';i++){
            c++;   
    }
    printf("the number of characters are %d",c);
    return 0;

    

    
}