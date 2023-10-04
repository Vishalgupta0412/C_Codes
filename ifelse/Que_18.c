#include <stdio.h>

int main()
{
    int sp,cp,amt;
    printf("enter cp :");
    scanf("%d",&cp);
    printf("enter sp :");
    scanf("%d",&sp);

    if(sp>cp)
    {
        amt=sp-cp;
        printf("profit = %d \n", amt);
    }
    else if(amt=sp<cp)
    {
        amt=cp-sp;
        printf("loss = %d \n", amt);
    }
    else
    {
        printf("0 \n");
    }
    return 0;
}