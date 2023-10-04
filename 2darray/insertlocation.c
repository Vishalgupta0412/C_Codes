#include <stdio.h>
int main()
{
    int num, pos, element, arr[20];
    printf("enter total number:");
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter element to insert:\n");
    scanf("%d", &element);
    printf("enter position:\n");
    scanf("%d", &pos);
    for (int i = 0; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    num++;
    arr[pos - 1] = element;
    for (int i = 0; i < num; i++)
        printf("  %d  ", arr[i]);
    return 0;
}