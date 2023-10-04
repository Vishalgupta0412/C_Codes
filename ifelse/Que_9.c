#include <stdio.h>

int main()
{
    int x, y;
    printf("enter 2 co-ordinates :\n");
    scanf("%d%d", &x, &y);

    
    if (x > 0 && y > 0)
    {
        printf("first co-ordinates \n");
    }
    else if (x > 0 && y < 0)
    {
        printf("second co-ordinates \n");
    }
        else if (x < 0 && y < 0)
    {
            printf("third co-ordinates \n");
    }
        else if (x < 0 && y > 0)
    {
            printf("fourth co-ordinates \n");
    }
    else
    {
        printf ("co-ordinates in line \n");
    }
        return 0;
    }