#include <stdio.h>
int main()
{
    int num;
    printf("enter the number :");
    scanf("%d",&num);

    if(num>=48 && num<=57)
    {
        printf("numerical value \n");
    }
    else if (num>=65 && num<=90)
    {
        printf("capital alphabet \n");
    }
    else if(num>=97 && num<=122)
    {
        printf("small alphabet \n");
    }
    else
    {
        printf("special Character \n");
    }
    return 0;
}