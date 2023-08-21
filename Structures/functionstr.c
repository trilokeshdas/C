#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct students{
    int rno;
    char name[100];
    float gpa;
    int sem;
    long int phone;
}; 
typedef struct students st;
void print(st s);
int main(){
    struct students s1,s2;
    //st s1,s2;
    s1.rno=65;
    printf("enter the name of the student");
    gets(s1.name);
    printf("enter the gpa");
    scanf("%f",&s1.gpa);
    s1.sem=1;
    printf("enter the phone number");
    scanf("%f",&s1.phone);

     s2.rno=50;
    printf("enter the name of the student");
    fflush(stdin);
    gets(s2.name);
    printf("enter the gpa");
    scanf("%f",&s2.gpa);
    s2.sem=1;
    printf("enter the phone number");
    scanf("%f",&s2.phone);

    print(s1);
    printf("\n");
    print(s2);

    return 0;

}
void print(st s){
    printf("roll number %d\t",s.rno);
    printf("name %s\t ",s.name);
    printf("gpa %f\t",s.gpa);
    printf("sem %d\t",s.sem);
    printf("phone %d\t",s.phone);
  
}