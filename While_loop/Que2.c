#include<stdio.h>
int main ()
{
    int term1=0,term2=1,e,term3;
    //printf("%d%d\n",term1,term2);
    printf("enter value \n");
    scanf("%d",&e);
    for(int i = 0; i < e ; i++)
    {
        term3=term1+term2;
        printf(" %d ",term3);
        term1=term2;
        term2=term3;
    }
    return 0;
}