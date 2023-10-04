#include <stdio.h>

int main()
{
    // area of triangle => 1/2*b*h;
    float base,height,result;
    printf("enter the base :-");
    scanf("%f",&base);
    printf("enter the height :-");
    scanf("%f",&height);
    result = 1.0/2.0*base*height;
    printf("area of triangle is %f \n",result);
    return 0;

}