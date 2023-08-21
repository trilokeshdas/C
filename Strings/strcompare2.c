#include<stdio.h>
#include<stdlib.h>

int main() {
    int c=0, diff=0;
char s1[100];
char s2[100];
printf("enter string 1");
scanf("%[^\n]",&s1);
fflush(stdin);
printf("enter string 2");
scanf("%[^\n]",&s2);
for(int i=0; s1[i]!='\0'|| s2[i]!='\0';i++){
    if(s1[i]!=s2[i]){
        diff= s1[i]-s2[i];
        break;
    }

    

}
if(diff==0){
    printf("same");
}
else if(diff<0){
    printf("lags");
}
else{
    printf("gains");
}

return 0;
}