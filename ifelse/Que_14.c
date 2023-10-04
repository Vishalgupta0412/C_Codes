#include <stdio.h>

int main()
{
    int a,b,c;
    printf("enter 3 angles :");
    scanf("%d%d%d",&a,&b,&c);

    if(a==b && b==c && c==a)
    {
        printf("equilateral triangle \n");
    }
    else if(a==b || b==c ||c==a)
    {
        printf("isoceles triangle \n");
    }
    else
    {
        printf("scalen triangle \n");
    }
    return 0;
}