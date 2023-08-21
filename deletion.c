#include<stdio.h>
#include<stdlib.h>
int main(){
int i,p=3,n=5;
int arr[100]={1,2,3,4,5};
for(i=p-1; i<n-1;i++){
    arr[i]=arr[i+1];
}
for(i=0;i<n-1;i++){
    printf("%d\t",arr[i]);
}

return 0;
}