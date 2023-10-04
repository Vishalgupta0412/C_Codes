#include<stdio.h>
int main()
{
    int s,e,i,sum=0;
    printf("enter input s :");
    scanf("%d",&s);
    printf("enter input e :");
    scanf("%d",&e);
    for(i=s; i<=e; i++)
    {
        if(i%2 != 0){
            sum+=i;
        }
    }
    printf("odd sum %d \n",sum);
    return 0;
}
    

