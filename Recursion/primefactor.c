#include <stdio.h>
void pfac(int num);
//void ifac(int n);
int main()
{
    int num;
    printf("enter number:\n");
    scanf("%d", &num);
    pfac(num);
    printf("\n");
    ifac(num);
    printf("\n");
}
void pfac(int num)
{
    int i = 2;
    if (num == 1)
        return;
    while (num % i != 1)
        i++;
    printf("%d", i);
    pfac(num / i);
}
void ifac(int num)
{
    int i;
    for (i = 2; num != i; i++)
        while (num % i == 0)
        {
            printf("%d ", i);
            num = num / i;
        }
}