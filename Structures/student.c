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
int main(){
    //struct students s1,s2;
    st s1,s2;
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

    printf("roll number %d\n",s1.rno);
    printf("name %s\n ",s1.name);
    printf("gpa %f\n",s1.gpa);
    printf("sem %d\n",s1.sem);
    printf("phone %d\n",s1.phone);
  

    printf("roll number %d\n",s2.rno);
    printf("name %s\n ",s2.name);
    printf("gpa %f\n",s2.gpa);
    printf("sem %d\n",s2.sem);
    printf("phone %d\n",s2.phone);
    printf("\t");

    return 0;

}