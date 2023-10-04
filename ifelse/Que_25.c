#include<stdio.h>
int main ()
{
    
    printf("1:square\n");
    printf("2:rectangle\n");
    printf("3:cube\n");
    printf("4:circle\n");

    int choice;
    float area=0;
    printf("enter choice:\n");
    scanf("%d",&choice);

    if(choice==1)
    {
        float side;
        printf("enter side:\n");
        scanf("%f",&side);
        area=side*side;
    }
    else if(choice==2)
    {
        float l,b;
        printf("enter l & b:\n");
        scanf("%f%f",&l,&b);
        area=l*b;
    }
    else if(choice==3)
    {
        float side;
        printf("enter side:\n");
        scanf("%f",&side);
        area=side*side*side;
    }
    else if(choice==4)
    {
        float r,pi=3.14;
        printf("enter r:\n");
        scanf("%f",&r);
        area=pi*r*r;
    }
    else
    {
        printf("invalid choice\n");
    }
    printf("area:%f\n",area);
    return 0;

    
}