#include<stdio.h>
int main()
{
    int min,arr[10];
    printf("enter 10 no:");
    for ( int i=0; i<10; i++)
    {
        scanf("%d",&arr[i]);
    }
    min=arr[0];
    for (int i=1; i<10; i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("min=%d\n",min);
    return 0;
}