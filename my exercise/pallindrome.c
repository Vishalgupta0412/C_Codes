#include <stdio.h>
int main()
{
    int num, rem, rev = 0, firstvalue;
    printf("enter number:\n");
    scanf("%d", &num);

    firstvalue = num;
    while (num != 0)
    {
        rem = num % 10;
        rev = (rev * 10) + rem;
        num = num / 10;
    }
    if (firstvalue == rev)
    {
        printf("pallindrome:\n", firstvalue);
    }
    else
    {
        printf("normal value:\n", firstvalue);
    }
    return 0;
}
