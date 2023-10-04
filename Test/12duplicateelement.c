#include<stdio.h>
int main()
{
    int n ,arr[10];
    printf("enter size of arr:\n");
    scanf("%d",&n);
    printf("enter element:\n");
    for ( int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("duplicate element:\n");
    for (int i=0; i<n; i++)
    {
        for( int j=i+1; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                printf("%d\n",arr[i]);
            }
        }
    }
    return 0;
}