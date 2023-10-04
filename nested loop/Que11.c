#include <stdio.h>
int main()
{
    for (int row = 5; row >= 0; row--)
    {
        for (int space = 0; space < row; space++)
        {
            printf(" ");
        }
        for (int star = 5; star > row; star--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}