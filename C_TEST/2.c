#include<stdio.h>
int main()
{
    int i,j,row,col,arr[5][5],sum=0;
    printf("enter row and col in first mattrix:\n");
    scanf("%d%d",&row,&col);
    printf("enter element:\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The MaTTRix\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(i==j)
            {
                sum=sum+arr[i][j];
            }
        }
    }
    printf("Diagonal Matrix is=%d\n",sum);
    return 0;

}
