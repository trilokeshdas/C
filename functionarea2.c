#include<stdio.h>
#include<math.h>
void area(float b, float h);

int main(){
    float b,h;
    printf("enter b");
    scanf("%f",&b);
    printf("enter h");
    scanf("%f",&h);
    area(b,h);

    
}
void area(float b, float h){
    printf("the area of the triangle is %f", 0.5*b*h);

}