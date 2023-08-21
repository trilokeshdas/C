
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
  int i,n,pos;
  printf("enter the size of the array");
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++){
    printf("enter the elements");
    scanf("%d",&a[i]);
  }
  printf("enter the position to be deleted");
scanf("%d",&pos);
for(i=pos-1;i<n-1;i++){
    a[i]=a[i+1];
}
for(i=0;i<n-1;i++){
    printf("%d\n",a[i]);
}
  
      return 0;
}