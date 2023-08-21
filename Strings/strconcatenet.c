#include<stdio.h>
#include<stdlib.h>

int main(){
    int i,len1=0, len2=0;
    char s1[100];
    char s2[100];
    printf("enter string s1");
    scanf("%[^\n]",&s1);   
    fflush(stdin); 
     printf("enter string s2");
    scanf("%[^\n]",&s2);
    for(i=0;s1[i]!='\0';i++){
        len1++;
    }
    for(i=0;s2[i]!='\0';i++){
        len2++;
    }
    for(i=0;i<=len2;i++){
        s1[i+len1]=s2[i];
    }
    printf("%s",s1);
    return 0;
}