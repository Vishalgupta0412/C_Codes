#include <stdio.h>
int main()
{
    int arr[5][3];
    printf("enter element for matrix 3*5:\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\nmatrix is:\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            printf("%d\t", arr[i][j]);
        }
    }
    printf("\n");
    return 0;
}