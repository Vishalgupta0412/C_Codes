#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("nth term:\n");
    scanf("%d",&n);
    printf("\nodd number:");
    for(int i=1; i<=n; i++)
    {
        printf("%d ",2*i-1);
    }
    return 0;
}