#include <stdio.h>

int main()
{
    int age;
    printf("enter the age :");
    scanf("%d",&age);

    if (age >= 18)
    {
        printf("eligible for vote \n");
    }
    else
    {
        printf("not eligible for vote \n");
    }
    return 0;
}