#include<stdio.h>
#include<math.h>
int main()
{
    int n,rem,sum=0,temp,a=0;
    printf("enter number:\n");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        temp=temp/10;
        a++;
    }
    temp=n;
    while(temp>0)
    {
        rem=temp%10;
        sum=sum+pow(rem,a);
        temp=temp/10;
    }
    if(sum==n)
    {
        printf("armsrtong no.\n");
    }
    else
    {
        printf("not armstong no.\n");
    }
    return 0;

}