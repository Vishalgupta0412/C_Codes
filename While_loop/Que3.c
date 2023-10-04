#include<stdio.h>
int main()
{
    long int n,rem,sum=0;
    printf("enter number :\n");
    scanf("%ld",&n);

    while( n > 0)
    {
        long int rem=n%10;
        if(rem%2 !=0);
        n=n/10;
    sum++;
    }
        
        

    printf("total digit %ld :\n",sum);






    return 0;
}