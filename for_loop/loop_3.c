#include<stdio.h>
int main()
{
    int start,end,sum=0,i;
    printf("enter starting & ending :\n");
    scanf("%d%d",&start,&end);


    for(i=start; i<=end; i++)
    {
       sum=sum+i;
    }
         printf("%d  \n",sum);
    
    return 0;
}