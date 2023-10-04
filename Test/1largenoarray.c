#include<stdio.h>
int main()
{
    int n,large,arr[20];
    printf("enter number of element:\n");
    scanf("%d",&n);
    printf("enter element:\n");
    for (int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    large=arr[0];
    for(int i=0; i<n; i++)
    {
        if(large<arr[i])
        {
            large=arr[i];
        }
    }
    printf("largest of %d element=%d\n",n,large);
    return 0;
}
