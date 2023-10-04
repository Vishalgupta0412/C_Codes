#include<stdio.h>
int main()
{
    int num,rev=0,rem,firstvalue;
    printf("enter value:\n");
    scanf("%d",&num);
    firstvalue=num;
    while (num!=0)1
    {
        rem=num%10;
        rev=(rev*10)+rem;
        num=num/10;
    }
    if (firstvalue==rev)
    {
        printf("pallindrome value\n",firstvalue);
    }
    else
    {
        printf("normal value\n",firstvalue);
    }
    return 0;
}