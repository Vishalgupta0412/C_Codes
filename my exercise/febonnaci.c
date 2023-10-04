#include<stdio.h>
int main()
{
    int term1=1,term2=3,term3;
    printf("%d%d\n",term1,term2);

    for(int i=0; i<5; i++)
    {
        term3=term1+term2;
        printf(" %d ",term3);
        term1=term2;
        term2=term3;
    }
    
    return 0;
}