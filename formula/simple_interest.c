#include <stdio.h>

int main() 
{
    float p,r,t,amount,si;
    printf("enetr 3 value:\n");
    scanf("%f%f%f",&p,&r,&t);


    si=p*r*t/100.0;
    amount=p+si;


    printf("si=%.2f \n",si);
    printf("amount=%.2f\n",amount);


    return 0;    
}
   