#include<stdio.h>
int lin(int[]);
int linearsearch(int[], int, int);
int main()
{
    int size, key;
    printf("enter size of array:\n");
    scanf("%d", &size);

    int arr[size];
    printf("enter array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter element search:\n");
    scanf("%d", &key);

    int pos = linearsearch(arr, key, size);
    if (pos == -1)
    {
        printf("not found\n");
    }
    return 0;
}

int linearsearch(int arr[], int key, int size)
{
    int found = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            printf("found index position =%d\n",i);
            found = 1;
        }
    }
    if (found == 1)
    {
        return -1;
    }
}
