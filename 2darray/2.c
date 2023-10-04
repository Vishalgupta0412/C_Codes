#include <stdio.h>
int main()
{
    int r1, c1, r2, c2;
    printf("enter row and column first matrix\n");
    scanf("%d%d", &r1, &c1);
    printf("enter row and column second matrix\n");
    scanf("%d%d", &r2, &c2);

    if (r1 == r2 && c1 == c2)
    {
        int matr1[r1][c1], matr2[r2][c2], matr3[r1][c1];
        printf("enter element first matrix:\n");
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                scanf("%d",&matr3[i][j]);
            }
        }
        printf("enter the element 2nd matrix:\n");
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                scanf("%d", &matr3[i][j]);
            }
        }
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                matr3[i][j] = matr1[i][j] + matr2[i][j];
            }
        }
        printf("the result matrix is:\n");
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                printf("%d", matr3[i][j]);
            }
            printf("/n");
        }
    }
    else
    {
        printf("addition not possible\n");
    }

    return 0;
}