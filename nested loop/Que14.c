#include<stdio.h>
int main()
{
    for (int i=0; i<5; i++)
    {
        for (int s=5-1; s>i; s--)
        {
            printf(" ");
        }
        for (int j=0; j<=i; j++)
        {
            printf("%d",j+1);
        }
        for (int k=i; k>0; k--)
        {
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}