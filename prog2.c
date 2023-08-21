#include<stdio.h>
#include<stdlib.h>

int main()
{
    float phy;
    float chem;
    float maths;
    float bio;
    float comp;

    printf("phy=");
    scanf("%f",&phy);

    printf("chem=");
     scanf("%f",&chem);

    printf("maths=");
     scanf("%f",&maths);
    
    printf("bio=");
     scanf("%f",&bio);

    printf("comp=");
     scanf("%f",&comp);

     float avg= (phy+chem+maths+bio+comp)/5;

     printf("the average marks=%f",avg);
      return 0;

}