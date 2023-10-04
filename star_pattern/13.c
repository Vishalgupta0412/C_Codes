//     *     
//     *     
// * * * * * 
//     *     
//     *  

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of plus pattern (odd number): ");
    scanf("%d", &n);
    // Upper part of the plus pattern
    for (int i = 1; i <= n; i++)
    {
        if (i == (n + 1) / 2)
        {
            for (int j = 1; j <= n; j++)
            {
                printf("* ");
            }
        }
        else
        {
            for (int j = 1; j <= n; j++)
            {
                if (j == (n + 1) / 2)
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}