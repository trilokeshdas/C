#include<stdio.h>
#include<stdlib.h>

int main()
{
    float l;
    float b;
    float r;

    printf("l= ");
    scanf("%f",&l);
    
    printf("b= ");
    scanf("%f",&b);

    printf("r=");
    scanf("%f",&r);


    float recta= l*b;
    float rectp= 2*l+2*b;
    
    printf("the area of rectangle is= %f\n", recta);
    printf("perimeter of rectangle is=%f\n",rectp);

  
    float cira= 3.14*r*r;
    float cirp= 2*3.14*r;

    printf("the area of circle is=%f\n",cira);
    printf("the perimter of circle is=%f\n",cirp);

    return 0;

}