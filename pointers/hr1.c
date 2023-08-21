#include <stdio.h>
#include <stdlib.h>

void update(int *a,int *b);
int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    printf("enter a");
    scanf("%d", &a);
    printf("enter b");
    scanf("%d", &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

void update(int *a, int *b){
    int sum= *a + *b;
    int diff= *a-*b;
    *a=sum;
    *b=abs(diff); // gives the absolute value of difference
    
}