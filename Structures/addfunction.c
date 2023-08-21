#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct complex{
    float rl;
    float im;
};
typedef struct complex cn;
void add(cn c1, cn c2);
//void div(cn c1, cn c2);
int main(){
    cn c1={1,2};
    cn c2={2,3};
    add(c1,c2);
    //div(c1,c2);
    return 0;
}

void add(cn c1,cn c2){
    cn sum;
    sum.rl= c1.rl+c2.rl;
    sum.im= c1.im+c2.im;
    printf("%f+i%f",sum.rl,sum.im);

}

