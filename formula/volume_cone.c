#include <stdio.h>

int main(){
    // volume of cone => 1/3*pi*r*r*h;
    float radius,height,pi=3.14,result;
    printf("enter the radius :");
    scanf("%f",&radius);
    printf("enter th height :");
    scanf("%f",&height);
    result = 1.0/3.0*pi*radius*radius*height;
    printf("volume of cone is %f \n",result);
    printf("volume of cone is %.3f \n",result);

return 0;

}