/*#include<stdio.h>
int main()
{
    int common=0,arr1[5],arr2[5];
    printf("enter number:");
    for(int i=0; i<5; i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("enter number:");
    for (int i=0; i<5; i++)
    {
        scanf("%d",&arr2[i]);
    }
     for(int i=0; i<5; i++)
    {
        if(arr1[i]==arr2[i])
        {
            printf("common value:\n");
        }
        if(arr1[i]!=arr2[i])
        {
            printf("no common:\n");
        }
    }
    pri
    return 0;
}*/
#include<stdio.h>
int main()
{
    int size1,size2;
    printf("Enter size of First Array:");
    scanf("%d",&size1);
    printf("Enter size of Second Array:");
    scanf("%d",&size2);

    int arr1[size1],arr2[size2];

    printf("enter 1st Array Elements\n");
    for (int i = 0; i < size1; i++)
    {
        scanf("%d",&arr1[i]);
    }    
    printf("enter 2nd Array Elements\n");
    for (int i = 0; i < size2; i++)
    {
        scanf("%d",&arr2[i]);
    }
    //logic
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if(arr1[i]==arr2[j])
            {
                printf("find common(%d) at arr1[%d] arr2[%d]\n",arr1[i],i,j);
            }
        }
    }

    return 0;
}