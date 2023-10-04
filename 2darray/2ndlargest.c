#include<stdio.h>
int main()
{
    int size,first,second,arr[50];
    printf("Number of element in array:\n");
    scanf("%d",&size);
    printf("enter %d element:\n",size);
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    first=second;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>first)
        {
            second=first;
            first=arr[i];
        }
        else if(arr[i]>second && arr[i]<first)
        {
            second=arr[i];
        }
    }
    printf("the largest no =%d\n",first);
    printf("2nd largest no =%d\n",second);
    return 0;
}