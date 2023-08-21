#include<stdio.h>
#include <stdlib.h>

void no_swap(int x, int y);
void swap(int *x, int *y);

int main(){
    int x=10;
    int y=20;
    printf("the value of x and y before swap is %d and %d \n",x,y);
    //no_swap(x,y); //here only the values are copied but not changed
    swap(&x,&y); // here the address is swapped so the numbers swapped
      // printf("the value of x and y after swap is %d and %d\n",x,y); //first way of printing
    return 0;

     
}
// void no_swap(int x, int y){
//     int z;
//     z=x;
//     x=y;
//     y=z;
    
//}
// void swap(int *x, int *y){
//     int z;
//     z=*x;
//     *x=*y;
//     *y=z;    
// }
                                        // OR //second way of printing
  void swap(int *x, int *y){
    int z;
    z=*x; //value at address of x is stored in z
    *x=*y; // value at the address of x is now changed to value at the address of y
    *y=z;  
 printf("the value of x and y after swap is %d and %d\n",*x,*y);
}                              