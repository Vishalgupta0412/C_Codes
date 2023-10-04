/*#include <stdio.h>
int main()
{
    int num, index, arr[10];
    printf("enter 10 no.:");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter num to search:");
    scanf("%d", &num);
    for (int i = 1; i < 10; i++)
    {
        if (arr[i] = num)
        {
            index = i;
            
        }
        printf("index no.=%d\n", index);
    }
    printf("index no=%d\n",index);

    return 0;
}*/
#include <stdio.h>
int main()
{
    int arr[10], find, found = 0;
    printf("enter the array elements \n");

    for (int j = 0; j < 10; j++)
    {
        scanf("%d", &arr[j]);
    }
    
    // 56 67 34 23 45 12 89 23 67 60
    printf("enter the element to find out from array \n");
    scanf("%d", &find);//12

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == find)
        {
            printf("found at position %d \n", i);
            found = 1;
        }                   
    }
    // if (!found)
    if (found == 0)
    {
        printf("%d not found in array \n",find);
    }
    return 0;
}