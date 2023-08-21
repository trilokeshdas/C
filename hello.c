#include<stdio.h>
#include<stdlib.h>

int main() {
    int c=0;
char s1[100];
char s2[100];
printf("enter string 1");
scanf("%[^\n]",&s1);
fflush(stdin);
printf("enter string 2");
scanf("%[^\n]",&s2);
for(int i=0; s1[i]!='\0'|| s2[i]!='\0';i++){
    if(s1[i]!=s2[i]){
        c=1;
        break;
    }
    

}
if(c==0){
    printf("the strings are same");
}
else{
    printf("not same ");
}
return 0;
}