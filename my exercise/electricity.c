#include<stdio.h>
int main()
{
    float unit,amount,surcharge;

    printf("unit:\n");
    scanf("%f",&unit);

    if(unit>=0 && unit<200)
    {
        amount=unit*2.20;
    }
    else if(unit>=200 && unit<400)
    {
        amount=unit*5.50;
    }
    else if(unit>=400)
    {
        amount=unit*8.80;
    }
    else
    {
        printf("invalid\n");
        exit(0);
    }
    if (amount<100)
    {
        amount=100;
    }
    if(amount>=1200)
    {
        surcharge=amount*0.15;
        printf("unit price=%.2f \n surcharge=%.2f\n",amount,surcharge);
        amount=amount+surcharge;
    }
    printf("net amount=%.2f\n",amount);
    return 0;

    
}