#include <stdio.h>
void sort(int[], int);
int main()
{
    int i;
    int arr[10] = {3, 5, 2, 6, 3, 8, 9, 7, 3, 1};
    printf("the aray before sort:\n");
    for (int i = 0; i < 10; i++)
        printf("%i ", arr[i]);
    sort(arr, 10);
    printf("\nthe array after sort:\n");
    for (int i = 0; i < 10; i++)
        printf("%i ", arr[i]);
    return 0;
}
void sort(int a[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
}