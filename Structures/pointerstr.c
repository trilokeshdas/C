#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct students{
    int rno;
    char name[100];
    float gpa;
}; 
typedef struct students st;
int main(){
    st s1={65,"trilokesh",9.9};
    st *ptr;
    ptr= &s1;
   // printf("%d",(*ptr).rno);
   printf("%d",ptr->rno);
    return 0;
}