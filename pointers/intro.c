#include<stdio.h>
#include <stdlib.h>
int main(){
    int i=34;
    int *j=&i;
    int **r=&j;
    printf("%d\n",i);
    printf("%d\n",*j); // it gives the value of the address stored in j
    printf("%u\n",&i); // address of i
    printf("%u\n",j); // it gives the value of j i.e address of i
     printf("%u\n",&j); // address of pointer j
       printf("%u\n",r); // it gives the address of pointer j using another pointer r
         printf("%d\n",*(&j)); // it gives the value of the address j
           printf("%d\n", &(*j)); // it gives the address of i
           printf("%d\n",*r);
           printf("%d\n",**r);
    return 0;
}