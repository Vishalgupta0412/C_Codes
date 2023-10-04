#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,s,t,amount,ci;

    printf("enter p:\n");
    scanf("%f",&p);

    printf("enter r:\n");
    scanf("%f",&r);

    printf("enter s:\n"); //interest yearly halfyearly quaterly etc
    scanf("%f",&s);

    printf("enter t:\n");
    scanf("%f",&t);

    amount=p*pow((1+(r/s)/100.0),s*t);
    printf("amount is %.2f :\n",amount);


    ci=amount-p;
    printf("ci %.2f :\n",ci);
    
    return 0;
}
   