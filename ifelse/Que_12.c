#include<stdio.h>
int main()
{
    int rollno;
    float M1,M2,M3,total, percentage;
    printf("enter rollno:\n");
    scanf("%d",&rollno);

    printf("enter 3 Marks \n");
    scanf("%f%f%f",&M1,&M2,&M3);

    total=M1+M2+M3;
    percentage=total/3.0;

    printf("total=%.1f percentage=%.1f \n",total,percentage);

    if(percentage<=100 && percentage>=60)
    {
        printf("First divison \n");
    }
    else if(percentage<60 && percentage>=45)
    {
        printf("Second Divison \n");
    }
    else if(percentage<45 && percentage>=33)

    {
        printf("Third Division \n");
    }
    else
    {
        printf("Fail \n");
    }

    return 0;

}