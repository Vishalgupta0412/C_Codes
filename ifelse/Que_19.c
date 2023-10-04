#include<stdio.h>
int main()
{
    int custmorid;
    float unit,amount,surcharge;

    printf("enter unit :\n");
    scanf("%f",&unit);

    if(unit>=0 && unit<200)
    {
        amount=unit*2.20;
    }
    else if(unit>=200 && unit<400)
    {
        amount=unit*4.50;
    }
    else if(unit>=400 && unit<600)
    {
        amount=unit*6.80;
    }
    else if(unit>=600)
    {
        amount=unit*9.00;
    }
    else
    {
        printf("Invalid unit\n");
        exit (0);
    }
    if(amount<200)
    {
        amount=200;
    }
    if (amount>=1000)
    {
        surcharge=amount*0.15;
        printf("unit price :%.2f && surcharge: %.2f \n",amount,surcharge);
        amount=amount+surcharge;

    }

    printf("net amount=%.2f\n",amount);
    return 0;
}