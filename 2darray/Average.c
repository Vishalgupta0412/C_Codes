#include<stdio.h>
int main()
{
    float sum=0,avg=0,num[4];
    for(int i=0;i<4;i++)
    {
        printf("enter number:\n");
        scanf("%f",&num[i]);

    }
    for(int i=0;i<4;i++)
    {
        sum=sum+num[i];
    }
    avg=sum/4;
    printf("average =%f\n",avg);
    return 0;

}