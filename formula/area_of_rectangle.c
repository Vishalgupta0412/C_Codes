
#include <stdio.h>

int main()
{
    //area of rectangle = l*w;
    float length,width,result;
    printf("enter the length :");
    scanf("%f",&length);
    printf("enter the width :");
    scanf("%f",&width);
    result = length*width;
    printf("area of rectangle is %f \n",result);
    printf("area of rectangle is %.2f \n",result);
    return 0;
}

