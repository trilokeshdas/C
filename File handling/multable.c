#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    FILE *fp;
    int n;
    printf("enter the the number whose table u want");
    scanf("%d",&n);
    fp=fopen("multable.txt","w");
    for(int i=1; i<=10; i++){
        fprintf(fp,"%dx%d=%d\n",n,i,n*i);
    }
    fclose(fp);
    printf("the table has been successfully printed ");
    return 0;
}