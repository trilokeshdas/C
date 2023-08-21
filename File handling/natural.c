#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int n;
    printf("enter the number of numbers you want to add");
    scanf("%d",&n);
    int num[n];
    for(int i=0; i<n;i++){
        printf("enter the numbers");
        scanf("%d",&num[i]);
    }
    FILE *fp1,*fp2,*fp3;
    fp1=fopen("natural.txt","w");
    for(int i=0;i<n;i++){
        fprintf(fp1,"%d ",num[i]);
    }
    fclose(fp1);
       fp1=fopen("natural.txt","r");
    fp2=fopen("even.txt","w");
       fp3=fopen("odd.txt","w");
       int nat[n];
       for(int i=0; i<n;i++){
        fscanf(fp1,"%d",&nat[i]);
        if(nat[i]%2==0){
            fprintf(fp2,"%d",nat[i]);
        }
        else{
            fprintf(fp3,"%d",nat[i]);
        }
       }
       fclose(fp1);
       fclose(fp2);
       fclose(fp3);
       return 0;
       

    


}