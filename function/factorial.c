#include <stdio.h>
int fact(int);
int main()
{
    int num, result;
    printf("enter number:\n");
    scanf("%d", &num);
    result = fact(num);
    printf("factorial is =%d\n", result);
    return 0;
}
int fact(n)
{
    int i = n, f = 1;
    while (i > 0)
    {
        f = f * i;
        i--;
    }
    return f;
}