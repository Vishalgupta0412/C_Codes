#include<stdio.h>
int main()
{
    int num,evenCount;
    printf("enter the number : ");
    scanf("%d",&num);

    for(evenCount=0;num >0; num=num/10)
    {   
        int rem=num%10;
        if (rem%2 == 0)     
        {
            evenCount++;
           
        }
    }

    
    printf(" total even digit :%d \n",evenCount);
    return 0;
}