#include <stdio.h>

int main(){
    // volume of cylinder => pi*r*r*h
    float radius,height,pi=3.14,result;
    printf("enter the radius--");
    scanf("%f",&radius);
    printf("enter the height--");
    scanf("%f",&height);
    result=pi*radius*radius*height;
    printf("volume of cylinder is %f \n",result);
    printf("volume of cylinder is %.4f \n",result);
    return 0;
}