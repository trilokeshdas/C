#include <stdio.h>
#include <stdlib.h>
// returning an array from a function
int *array();
int main(){
    int i,*p;
    p=array();
    for(i=0;i<5;i++){
        printf("%d\n",*p);
        p++;
    }
    return 0;

}
int *array(){
    static int arr[5]={1,2,3,4,5};
    return arr; //it return the address of the first element of the array
}
