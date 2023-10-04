#include <stdio.h>
int main()
{
    //surface area of cylinder=2*pi*r(r+h);
    float radius,height,pi=3.14,result;
    printf("enter the radius :");
    scanf("%f",&radius);
    printf("enter the height :");
    scanf("%f",&height);
    result=2.0*pi*radius*(radius+height);
    printf("surface area of cylinder is %f",result);
    return 0 ;
}