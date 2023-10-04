#include <stdio.h>

int main() 
{
// convert celsius to fahrenheit => C×9/5+32;
float celsius,result;
printf("enter the celsius :");
scanf("%f",&celsius);
result=celsius*9.0/5.0+32;
printf("convert celsius to fahrenheit is %f \n",result);
return 0;
}
