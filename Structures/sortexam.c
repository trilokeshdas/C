#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct students{
    int rno;
    char name[100];
    float gpa;
};
typedef struct students st;
int main(){
    int i,n,indx,j,max;
    printf("How many students to be added");
    scanf("%d",&n);
    st class[100];
    for(i=0;i<n;i++){
        printf("enter the roll no");
        scanf("%d",&class[i].rno);
        printf("enter the name ");
        scanf("%s",&class[i].name);
        printf("enter the gpa");
        scanf("%f",&class[i].gpa);

    }
    while(n>0){
    float max=class[0].gpa;
    for(i=0;i<n;i++){
        if(class[i].gpa>max){
            max=class[i].gpa;
        }
    }
    for(i=0;i<n;i++){
        if(max==class[i].gpa){
            indx=i;
            puts(class[i].name);
            printf("gpa: %f\n",class[i].gpa);
            break;
        }
    }
    for(i=indx;i<n-1;i++){
        class[i].rno=class[i+1].rno;
        class[i].gpa=class[i+1].gpa;
       strcpy(class[i].name,class[i+1].name);
    }
    n--;
    }

return 0;
}