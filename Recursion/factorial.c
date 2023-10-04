#include <stdio.h>
int fact(int);
int main()
{
    int n, result;
    printf("enter the number:\n");
    scanf("%d", &n);
    result = fact(n);
    printf("factorial is =%d\n", result);
    return 0;
}
int fact(int n)
{
    if (n == 1)
        return n;
    else
        return n * fact(n - 1);
}