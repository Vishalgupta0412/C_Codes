#include<stdio.h>

int main()
{
    int i,cube,a;
    printf("enter value :\n");
    scanf("%d",&cube);

    for(i=1; i<=cube; i++)
    {
       a=i*i*i;
     printf("cube %d = %d \n",i,a);
    }
    return 0;
}