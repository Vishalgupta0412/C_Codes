#include<stdio.h>
int main()
{
    int l;
    printf("enter l:\n");
    scanf("%d",&l);
   
    
    for (int i=1; i<=l; i++)
    {
         
        printf("%2d*%2d=%3d ",1,i,i*1);
        printf("%2d*%2d=%3d ",2,i,i*2);
        printf("%2d*%2d=%3d ",3,i,i*3);
        printf("%2d*%2d=%3d ",4,i,i*4);
        printf("%2d*%2d=%3d ",5,i,i*5);
        printf("%2d*%2d=%3d ",6,i,i*6);
        printf("%2d*%2d=%3d ",7,i,i*7);
        printf("%2d*%2d=%3d ",8,i,i*8);
        printf("\n");
    }
    return 0;
    

}