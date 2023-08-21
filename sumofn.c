#include<stdio.h>
#include<stdlib.h>

int main()
{
    int sum=0;
    int n;

    printf("enter n");
    scanf("%d",&n);

    for(int j=n;j>=1; j--){
        sum = sum+j;
        printf("%d\n",j);
    }
    printf("%d\n",sum);
    
    
    return 0;
    
}
