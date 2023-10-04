#include <stdio.h>
int main()
{
    int odd = 0, even = 0,arr[6];
    
    printf("enter 6 no:");
    for ( int i = 0; i < 6; i++)
        scanf("%d", &arr[i]);
    for ( int i = 0; i < 6; i++)
    {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("total even=%d\n", even);
    printf("total odd=%d\n", odd);
    return 0;
}
