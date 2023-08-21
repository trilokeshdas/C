#include <stdlib.h>
#include <stdio.h>

int main(){
int i,present[20]={0};
float percentage[20];
for(i=0; i<5; i++){
    present[i]++;
    percentage[i]=(present[i]/5)*100;
    printf("%d\n",present[i]);
    printf("%f\n",percentage[i]);
}
printf("%d",percentage[0]);

return 0;


}
