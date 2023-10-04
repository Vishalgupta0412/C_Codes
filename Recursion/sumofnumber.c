#include<stdio.h>
int sum(int n);
int main()
{
    int num,result;
    printf("enter nuber:\n");
    scanf("%d",&num);
    result=sum(num);
    printf("sum =%d\n",result);
}
int sum(int value)
{
    if(value!=0)
    return value+sum(value-1);
    else
    return value;
}