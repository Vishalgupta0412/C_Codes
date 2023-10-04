#include<stdio.h>
void swap(int *num1,int *num2)
{
    int c;
    c=*num1;
    *num1=*num2;
    *num2=c;
    printf("swap value %d,%d\n",*num1,*num2);
}
int main()
{
    int num1,num2;
    printf("enter 2 numbers \n");
    scanf("%d %d",&num1,&num2);
   // printf("swap value %d ,%d\n",num1,num2);
    printf("after swap %d, %d\n",num2,num1);
    return 0;
}