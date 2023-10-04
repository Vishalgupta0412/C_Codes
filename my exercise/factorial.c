#include <stdio.h>
int main()
{
    int f=1,num;

    printf("number:");
    scanf("%d",&num);
    for (int i=1; i<=num; i++)
    {
        f=f*i;
        printf("%d*%d ",i,f);
    }
    printf(" factorial=%d\n ",f);
    return 0;
}