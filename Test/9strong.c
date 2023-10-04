#include<stdio.h>
//#include<math.h>
int main()
{
    int n,rem,f,k,r,sum=0;
    printf("enter number:\n");
    scanf("%d",&n);
    k=n;
    while(k!=0)
    {
    rem=k%10;
    f=f+fact(rem);
    k=k/10;
    sum=sum+f;
    }
    if(sum==n)
    {
        printf("strong number\n");
    }
    else
    {
        printf("not strong number\n");
    }
    return 0;


{  
    int mul=1;  
    for(int i=1;i<=r;i++)  
    {  
        mul=mul*i;  
    }  
    return mul;  
      
}  
}