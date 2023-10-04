#include <stdio.h>
int main()
{
    for (int row = 0; row < 10; row++)
    {
        for (int col = 0 ; col < 5; col++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}