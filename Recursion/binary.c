#include <stdio.h>
int bin(int);
int main()
{
    int num, result;
    printf("enter number:\n");
    scanf("%d", &num);
    result = bin(num);
    printf("binary number=%d\n", result);
}
int bin(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return (n % 2) + 10 * bin(n / 2);
    }
}
