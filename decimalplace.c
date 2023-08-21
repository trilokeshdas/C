// C program to set precision in floating point numbers
// #include<stdio.h>
// #include<math.h>
// int main()
// {
//    float num = 5.48958123;
  
//    // 4 digits after the decimal point
//    num = floor(10000*num)/10000;
  
//    printf("%f", num);
//    return 0;
// }
               //OR
// C program to set precision in floating point numbers
// using format specifier //In C, there is a format specifier in C. 4
//To print 4 digits after dot, we can use 0.4f in printf().
// Below is program to demonstrate the same
#include<stdio.h>
  
int main() 
{
    float num = 5.48958123;
  
    // 4 digits after the decimal point  
    printf("%0.4f", num); 
    return 0;
}