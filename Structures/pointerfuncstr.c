#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct students{
    int rno;
    char name[100];
    float gpa;
   
}; 
typedef struct students st;
 int print(st *ptr);
int main(){
    st *ptr;
    st s1={65,"trilokesh",9.9};
    print(&s1);
    printf("%d\n",s1.rno);
    ptr=&s1;
    int c= ptr->rno;
    printf("%d",c);
    
   
    return 0;
}
int print(st *ptr){
    printf("%d\n",ptr->rno);
   ptr->rno=55;
}