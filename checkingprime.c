#include<stdio.h>
#include<stdlib.h>

int main(){
  int i,j,n;
  int c=0;
  
  printf("enter n");
  scanf("%d",&n);

  for(i=1; i<=n; i++){
    if(n%i==0){
      c++;
  }


  }
  if(c==2){
    printf("it is a prime number");
  }else{
    printf("it is not a prime number");
  }
  return 0;
}
