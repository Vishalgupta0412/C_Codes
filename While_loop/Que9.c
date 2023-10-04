#include<stdio.h>
int main()
{
    int num, prime=0;
    printf("enter number :\n");
    scanf("%d",&num);

    for(int i=2; i<num;i++)
    {
        if(num%i==0)
        {
            printf("%d is not prime no \n",num);
            prime=1;
            break;
        }
        
    }
    if (prime==0)
    {
        printf("%d is prime no: ",num);
    }
    return 0;
}