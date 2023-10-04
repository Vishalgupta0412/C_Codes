#include <stdio.h>
int checkprime(int);
int main()
{
    int num1, num2, temp;
    printf("enter 2 positive number:");
    scanf("%d%d", &num1, &num2);
    printf("prime number between number:\n");
    for (int i = num1 + 1; i < num2; i++)
    {
        temp = checkprime(i);
        if (temp == 1)
            printf("%d \n", i);
    }
    return 0;
}
int checkprime(int n)
{
    int j, temp = 1;
    for (j = 2; j <= n / 2; j++)
    {
        if (n % j == 0)
        {
            temp = 0;
            break;
        }
    }
    return temp;
}