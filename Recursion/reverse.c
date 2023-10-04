#include <stdio.h>
#include<math.h>
int rev(int) ;
int main()
{
    int num, result, temp;
    printf("enter number:\n");
    scanf("%d", &num);
    result = rev(num);
    printf("reverse=%d\n", num);
    return 0;
}
int rev(int num)
{
    if (num < 10)
    {
        return num;
    }
    else
    {
        return (((num % 10) * pow(10, num - 1)) + rev(num / 10));
    }
}