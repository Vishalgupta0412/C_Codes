#include <stdio.h>
#include<math.h>
int main()
{
    int num, rem, count = 0, i=0, arr[10];
    printf("enter number:\n");
    scanf("%d", &num);
    while (num != 0)
    {
        rem = num % 10;
        arr[i] = rem;
        num = num / 10;
        i++;
        count++;
    }
   // printf("reverse=");
    for (i = 0; i < count; i++)
        printf("reverse is=%d\n",arr[i]);
    return 0;
}