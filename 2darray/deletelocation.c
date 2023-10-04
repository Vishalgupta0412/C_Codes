#include <stdio.h>
int main()
{
    int num, pos, arr[15];
    printf("enter element:\n");
    scanf("%d", &num);
    printf("enter %d element:\n", num);
    for (int i = 0; i < num; i++)
    {
        scanf("%d", & arr[i]);
    }
    printf("delete postion:\n");
    scanf("%d", &pos);
    while (pos < num)
    {
        arr[pos - 1] = arr[pos];
        pos++;
    }
    num--;
    for (int i = 0; i < num; i++)
        printf("%d ", arr[i]);
    return 0;
}