#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct complex{
    float rl;
    float im;
};
typedef  struct complex cn;
int main(){
    cn c1,c2,sum,diff;
     c1.rl=2;    // c1={2,3};
     c1.im=3;    // c2={1,2};          
     c2.rl=1;
     c2.im=2;

sum.rl=c1.rl+c2.rl;
sum.im=c1.im+c2.im;
printf("%f+i%f",sum.rl,sum.im);
//printf("%f+i%f",c1.rl+c2.rl,c1.im+c2.im);
return 0;
     
     
}