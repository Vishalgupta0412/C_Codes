#include <stdio.h>
int maximum(int[], int);
int main()
{
    int max, value[5];
    printf("enter 5 number:");
    for (int i = 0; i < 5; i++)
        scanf("%d", &value[i]);
    max = maximum(value, 5);
    printf("maximum value =%d\n", max);
    return 0;
}
int maximum(int value[], int n)
{
    int maxvalue;
    maxvalue = value[0];
    for ( int i=0;i<n;i++)
    if (value[i] > maxvalue)
        maxvalue = value[i];
    return maxvalue;
}