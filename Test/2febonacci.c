#include<stdio.h>
int main()
{
    int n,term1=0,term2=1,term3;
    printf("enter term:\n");
    scanf("%d",&n);

    for ( int i=0; i<n; i++)
    {
        term3=term1+term2;
        printf(" %d ",term3);
        term1=term2;
        term2=term3;
    }
    return 0;
}