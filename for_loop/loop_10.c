#include<stdio.h>
#include<math.h>
int main()
{
    int s,e,i,a;
    printf("enter s:");
    scanf("%d",&s);
    printf("enter e:");
    scanf("%d",&e);


    
    for(i=s;  i<=e; i++)
    {
        a=pow(s,e);
        printf("power: %d \n",a);
    }

    printf("%d",a);
    return 0;

}