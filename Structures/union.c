#include<stdio.h>
#include<stdlib.h>
#include<string.h>

union Data{
    int i;
    float f;
    char name[100];
};
int main(){
    union Data data;
    data.i=65;
    printf("%d",data.i);
    data.f=1.2;
    printf("%f",data.f);
    strcpy(data.name,"trilokesh");
    // printf("\n");
    // puts(data.name);
    printf("%s",data.name);
        return 0;
}