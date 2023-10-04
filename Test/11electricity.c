#include<stdio.h>
int main()
{
    float unit,amount,surcharge;
    printf("Enter Unit:\n");
    scanf("%f",&unit);

    if(unit>=0 && unit<200)
    {
        amount=unit*1.20;
    }
    else if(unit>=200 && unit<400)
    {
        amount=unit*1.50;
    }
    else if(unit>=400 && unit<600)
    {
        amount=unit*1.80;
    }
    else if(unit>=600)
    {
        amount=unit*2.00;
    }
    else
    {
        printf("invalid no\n");
    } 
            if(amount<100)
            {
                amount=100;
            }
            
            if(amount>=400)
            {
                surcharge=amount*0.15;
                printf("unit price:%.1f && surcharge:%.1f\n",amount,surcharge);
                amount=amount+surcharge;
            }
    printf("net amount=%.1f\n",amount);
    return 0;
    
}