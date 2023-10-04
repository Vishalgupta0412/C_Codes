#include <stdio.h>
int main()
{
    int ele, num, arr[30];
    printf("enter the element:");
    scanf("%d", &num);
    printf("enter the value:\n");
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter element to search:\n");
    scanf("%d", &ele);
    int i = 0;
    while (i < num && ele != arr[i])
    {
        i++;
    }
    if (i < num)
    {
        printf("number found location=%d\n", i + 1);
    }
    else
    {
        printf("number not found\n");
    }
    return 0;
}