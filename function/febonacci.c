#include <stdio.h>
#include<stdlib.h>
int febn(int);
int main()
{
    int num;
    printf("Enter the number of terms:\n");
    scanf("%d", &num);
    if(num<0)
    printf("febonacci series=%d", num);
    for (int i = 1; i <= num; i++)
        printf(" %d \t", febn(i));
    return 0;
}
int febn(int var)
{
    if (var == 1 || var == 2)
        return 1;
    else
        return (febn(var - 1) + febn(var - 2));
}