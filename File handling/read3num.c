#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    FILE *fp;
    fp= fopen("read3num.txt","r");
    int a,b,c;
    fscanf(fp,"%d%d%d",&a,&b,&c);
    printf("%d %d %d",a,b,c);
    return 0;

}