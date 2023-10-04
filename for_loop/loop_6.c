#include<stdio.h>
int main()
{
    int v,i,a,s,e;
    printf("enter input :");
    scanf("%d",&v);
    printf("enter s:");
    scanf("%d",&s);
    printf("enter e:");
    scanf("%d",&e);
    


    for ( i=s; i<=e; i++)
    {
        a=v*i;
        printf("%d*%d=%d \n",v,i,a);
    }
    
    return 0;
   
}