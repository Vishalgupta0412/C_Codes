#include <stdio.h>

int main()
{
    int number;
    printf("enter the integer :");
    scanf("%d",&number);
    

    if (number % 2 ==0)   //formula check
    {
        printf("the number is even \n");    
    }
    else
    {
    printf("the number is odd \n");
    }

    return 0;
}