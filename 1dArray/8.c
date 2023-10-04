/*#include<stdio.h>
int main()
{
    int arr1[]={10,20,32,40,50};
    int arr2[]={10,20,30,40,50};
    int isEqual=1;

    for (int i = 0; i < 5; i++)
    {
        if (arr1[i]!=arr2[i])
        {
            isEqual=0;
        }
    }
    if (isEqual==1)
    {
        printf("both array is equal\n");
    }
    else
    {
        printf("both array is not equal\n");
    }
    return 0;
}*/
#include<stdio.h>
int main()
{
    int isequal,arr1[5],arr2[5];
    printf("enter 5 digit:\n");
    for(int i=0; i<5; i++)
    {
    scanf("%d",&arr1[i]);
    }
    printf("enter 5 digit:\n");
    for (int i=0;i<5;i++)
    {
    scanf("%d",&arr2[i]);
    }
    isequal=1;

    for(int i=0; i<5; i++)
    {
        if(arr1[i]!=arr2[i])
        {
            isequal=0;
        }
    }
    if (isequal==1)
    {
        printf("both array is equal\n");
    }
    else
    {
        printf("both array not equal\n");
    }
    return 0;
}