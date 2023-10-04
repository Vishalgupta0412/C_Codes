#include<stdio.h>
int main()

{
    int num,rem,sum=0,temp;
    printf("enter number:\n");
    scanf("%d",&num);
   
    temp=num;
    while (num>0)
    {
        rem=num%10;
        sum=sum+rem*rem*rem;
        num=num/10;
    }
   // printf("%d \n",sum);

    if(sum==temp)
    {
        printf(" armstrong no \n",temp);
    }
    else
    {
        printf("not armstrong no \n",temp);
    }
    return 0;
}
