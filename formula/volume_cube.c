#include <stdio.h>

int main() 
{
    //volume of cube => r*r*r;
    float radius,result;
    printf("enter the radius :");
    scanf("%f",&radius);
    result = radius*radius*radius;
    printf("volume of cube is %f \n",result);
    return 0;

}