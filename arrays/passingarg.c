#include <stdlib.h>
#include <stdio.h>

int average(int *p,int n);
int main(){
    int i,n;
    printf("enter the size of array");
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n;i++){
        printf("enter the numbers");
        scanf("%d",&arr[i]);
    }
    int avg= average(arr,n);
    printf("the average is %d",avg);
    return 0;
}
int average(int *p,int n){
    int i,avg,sum=0;
    for(i=0;i<n;i++){
        sum+=*p;
        p++;
    }
    avg=sum/n;
    return avg;
}