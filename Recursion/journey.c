#include<stdio.h>
int main()
{
    float price,ded,ded1,rem,rem1,n;
    printf("enter pass:\n");
    scanf("%f",&n);
    printf("enter price:\n");
    scanf("%f",&price);


    ded1=price/4.0;
    ded=(n*190);
    rem1=price-ded1;
    rem=price-ded;

    printf("amount ded1=%.2f\n",ded1);
    printf("amount ded=%.2f\n",ded);
    printf("amount rem1=%.2f\n",rem1);
    printf("amount rem=%.2f\n",rem);
    return 0;
}