#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    FILE *fp1,*fp2;
    fp1=fopen("file1.txt","r");
    fp2=fopen("file2.txt","w");
      char c;
   c=fgetc(fp1);
        while(c!=EOF){
            // fputc(c,fp2);
            // fputc(c,fp2);
            fprintf(fp2,"%c",c);
               c=fgetc(fp1);

        }

        
    fclose(fp1);
    fclose(fp2);
    return 0;
}