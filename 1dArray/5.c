#include <stdio.h>
int main()
{
    int arr[6];
    printf("enter 6 no:");
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("reverse arrey:");
    for (int i = 5; i >= 0; i--)
    {
        if (i == 0)
            printf("%d \n", arr[i]);
        else
            printf("%d ", arr[i]);
    }
    return 0;
}
