#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct students{
    char name[100];
};
typedef struct students st;
int main(){
    st s1;
    s1.name="trilokesh";
    printf("%s",s1.name);
    return 0;
}