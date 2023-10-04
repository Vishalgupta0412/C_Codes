// ****
//   ***
//     **
//       *
//     **
//   ***
// ****

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Print the upper part of the arrow
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= (2 * i - 2); j++)
        {
            printf(" ");
        }

        // Print inverted right triangle star pattern
        for (int j = i; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    // Print lower part of the arrow
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (2 * n - 2 * i); j++)
        {
            printf(" ");
        }

        // Print simple right triangle star pattern
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}