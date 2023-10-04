#include<stdio.h>
int main()
{
    int marklist[5],grace=5;
    printf("enter the list of marks\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&marklist[i]);
        marklist[i]=marklist[i]+grace;
    }
    // printf("\nfinal list is.....");
    // /*printf("\nSr.No.\tmarks");*/
    for(int i=0;i<5;i++)
    printf("%d\t",marklist[i]);
    return 0;
}