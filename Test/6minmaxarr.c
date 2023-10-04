#include<stdio.h>
int main()
{
    int min,max;
    int arr[5]={43,23,64,75,98};


    max=arr[0];
    min=arr[0];
    for (int i=1; i<5; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
        if (arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("max=%d\n",max);
    printf("min=%d\n",min);

    return 0;
}