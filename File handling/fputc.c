#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    FILE *fp;
    fp=fopen("fputc.txt","w");
    fputc('c',fp);
    fputc('c',fp);
    fputc('c',fp);
    fputc('c',fp);
    fclose(fp);   
   
//simultaneously using a file in two modes
fp=fopen("fputc.txt","r");
printf("%c",fgetc(fp));
printf("%c",fgetc(fp));
printf("%c",fgetc(fp));
printf("%c",fgetc(fp));
fclose(fp);
return 0;
}