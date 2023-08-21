#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct cars{
    char model[100];;
    char name[100];
    char colour[100];
    long int price;
};
typedef struct cars car;
int main(){
    car c1={"OR02","buggati","black",100000};
    printf("%s\n",c1.model);
    printf("%s\n",c1.name);
    printf("%s\n",c1.colour);
    printf("%d\n",c1.price);
    return 0;

    
}