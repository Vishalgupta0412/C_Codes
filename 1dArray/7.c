#include<stdio.h>
int main()
{
    int first,second,arr[5];
    printf("enter 5 digit:\n");
    for(int i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }
    first=second;
    for(int i=1; i<5; i++)
    {
        if(arr[i]>first)
        {
            second=first;
            first=arr[i];
        }
    }
    printf("2nd largest=%d\n",second);
    return 0;
}
// #include<stdio.h>
// int main()
// {
//     int size;
//     printf("enter the size of array \n");
//     scanf("%d",&size);
//     int arr[size];
//     printf("enter the element \n");
//     for (int i = 0; i < size; i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     //step 1:
//     //40 20 30 80 10 5
//     //20 40 30 80 10 5
//     //20 30 40 80 10 5
//     //20 30 40 10 80 5
//     //20 30 40 10 5 80

//     for (int i = 0; i < size-1; i++)
//     {
//         for (int j = 0; j < size-i-1; j++)
//         {
//             if (arr[j]>arr[j+1])
//             {
//                 int temp=0;
//                 temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
//     }
  
//     for (int i = 0; i < size; i++)
//     {
//         printf(" %d  ",arr[i]);
//     }
    
    

//     return 0;
// }
