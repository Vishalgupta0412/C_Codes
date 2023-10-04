#include<stdio.h>
int main()
{
    int a,n,d,i,sum=0,value;
    printf("enter 3 value:\n");
    scanf("%d%d%d",&a,&n,&d);
    value=a;
    for(i=0;i<n;i++)
    {
        sum+=value;
        value=value+d;
        printf(" %d ",value);
    }
    printf("A.P. \n",n);
    return 0;
}
