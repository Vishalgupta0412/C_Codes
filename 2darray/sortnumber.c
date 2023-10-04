#include <stdio.h>
#include<stdlib.h>
int main()
{
    int n, temp, sorted = 0, arr[30];
    printf("\nhow many number:");
    scanf("%d", &n);
    if (n > 30)
    {
        printf("\nToo many number\n");
        exit(0);
    }
    printf("\nenter array element:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (int i = 0; i < n - 1 && sorted == 0; i++)
    {
        sorted = 1;
        for (int j = 0; j < (n - i) - 1; j++)
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                sorted = 0;
            }
    }
    printf("\nsorted number:\n");
    for (int i = 0; i < n; i++)
        printf("\n%d", arr[i]);
    return 0;
}