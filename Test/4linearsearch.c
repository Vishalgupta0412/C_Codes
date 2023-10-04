#include <stdio.h>
int main()
{
    int arr[10], f, n = 0;
    printf("enter element:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("enter search:\n");
    scanf("%d", &f);

    for (int j = 0; j < 10; j++)
    {
        if (arr[j] == f)
        {
            printf("postion:%d\n",j);
            n = 1;
        }
    }
    if (n == 0)
    {
        printf("%d not found\n", f);
    }
    return 0;
}