#include <stdio.h>

int main()
{
    int s1,s2,s3;
    printf("enter the side :");
    scanf("%d%d%d",&s1,&s2,&s3);

    if(s1+s2+s3==180)
    {
        printf("triangle formed \n");
    }
    else
    {
        printf("triangle not formed \n");
    }
    return 0;
}