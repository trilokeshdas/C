#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    FILE *fp;
    int num=655;
    fp=fopen("fprintf.txt","w");
    fprintf(fp,"%d",num);

    return 0;
}