#include<stdio.h>
int main()
{
    int num,oddCount;
    printf("enter the number : ");
    scanf("%d",&num);

    for(oddCount=0;num >0; num=num/10)
    {   
        int rem=num%10;
        if (rem%2 != 0)     
        {
            oddCount++;
           
        }
    }

    
    printf(" total odd digit :%d \n",oddCount);
    return 0;
}