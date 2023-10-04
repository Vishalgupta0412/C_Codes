#include<stdio.h>

int main()
{
   long int num,rev=0,rem;
    printf("enter value:\n");
    scanf("%ld",&num);

    while (num != 0)
    {
        rem = num % 10;
        rev = ( rev*10 ) + rem;
        num = num/10;
    }
    printf(" reveres value : %ld \n",rev);
  
    return 0;
}