#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct students{
    int rno;
    char name[100];
    float gpa;

};
typedef struct students st;
int comp(st s1, st s2);
int main(){
    st s1={65,"trilokesh",9.9};
    st s2={15,"jack",9.0};
    int c=comp(s1,s2);
    if(c==1){
        printf("the topper is %s",s1.name);
    }
    else if(c==-1){
        printf("the ttopper  is %s",s2.name);
    }
    else{
        printf("both are topper");
    }
    return 0;
}
int comp(st s1, st s2){
    if(s1.gpa>s2.gpa){
        return 1;
    }
    else if(s1.gpa<s2.gpa){
        return -1;
    }
    else{
        return 0;
    }
}