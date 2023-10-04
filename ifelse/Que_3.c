#include<stdio.h>
int main()
{
    int value;

    printf("enter the value :");
    scanf ("%d",&value);
    if(value>0)
    {
    printf("the value is positive \n");
    }
    else if(value<0)
    {
    printf("the value is negetive \n");
    }
    else
    {
        printf("Data incorrect \n");
    
    }
    return 0;

}