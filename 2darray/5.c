#include <stdio.h>
int main()
{
    int n, sum = 0, arr[100];
    printf("enter the number series:\n");
    scanf("%d", &n);
    printf("Enter %d number:\n",n);
    for (int i = 0; i < n; i++)
    {
        printf("enter num:");
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    printf("sum of all element =%d\n",sum);
    return 0;
}