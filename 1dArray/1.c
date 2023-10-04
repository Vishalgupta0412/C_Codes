#include<stdio.h>
int main()
{
    int max,arr[10];
    printf("enter 10 no:");
    for(int i=0; i<10; i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(int i=1; i<10; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("max=%d\n",max);
    return 0;

}