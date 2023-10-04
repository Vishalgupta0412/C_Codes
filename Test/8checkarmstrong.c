#include <stdio.h>
int main()
{
    int num, rem, sum = 0, temp;
    printf("enter no.:\n");
    scanf("%d", &num);

    temp = num;
    while (num > 0)
    {
        rem = num % 10;
        sum = sum + rem * rem * rem;
        num = num / 10;
    }
   // printf("%d\n", sum);

    if (sum == temp)
    {
        printf("armstrong number\n", temp);
    }
    else
    {
        printf("not armstrong number\n", temp);
    }
    return 0;
}