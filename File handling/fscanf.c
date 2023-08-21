#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    FILE *fp;
    int num;
    fp=fopen("fscanf.txt","r");
    fscanf(fp,"%d",&num); 
    //fscanf(fp,"%d",&num); the number of times we use fscanf for a particular variable, the value of the variable is read as the next value in the file

    printf("%d",num);
    return 0;
}