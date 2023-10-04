//    ****
//   ***
//  **
// *
//  **
//   ***
//    ****

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    // Print upper part of the arrow
    for (int i = 1; i < n; i++)
    {
        // Print trailing (n-rownumber) spaces
        for (int j = 1; j <= (n - i); j++)
        {
            printf(" ");
        }
        // Print inverted right triangle
        for (int j = i; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    // Print bottom part of the arrow
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            printf(" ");
        }
        // Print the right triangle
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}