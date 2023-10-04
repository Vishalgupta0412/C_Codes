#include <stdio.h>

int main()
{
    int mynum;
    printf("enter the month number :\n");
    scanf("%d", &mynum);

    if (mynum == 4 || mynum == 6 || mynum == 9 || mynum == 11)
    {
        printf("month is 30day \n");
    }
    else if (mynum == 1 || mynum == 3 || mynum == 5 || mynum == 7 || mynum == 8 || mynum == 10 || mynum == 12)
    {
        printf("month is 31days \n");
    }
    else if (mynum==2)
    {
        printf("month is 28 ya 29 days \n");
    }
    else
    {
        printf("error \n");
    }
    return 0;
}