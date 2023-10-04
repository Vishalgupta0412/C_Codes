#include<stdio.h>
int main()
{
    int max,min;
    int arr[5]={21,32,43,45,65};
    
    max=arr[0];
    min=arr[0];
    for(int i=1; i<5; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }

    printf("max=%d\n",max);
    printf("min=%d\n",min);

    return 0;
}