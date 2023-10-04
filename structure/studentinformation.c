#include<stdio.h>
struct student
{
    char name[0];
    int roll_no;
    float marks;
}
s[10];

int main()
{
    
    for (int i=0; i<10; i++)
    {
        s[i].roll_no=i+1;
        printf("\nenter roll number:%d \n",s[i].roll_no);
        printf("enter name:");
        scanf("%s",s[i].name);
        printf("enter marks:");
        scanf("%f",&s[i].marks);
        printf("\n");

    }
    
    for(int i=0;i<10;i++)
    {
        printf("\nRoll number: %d\n",i+1);
        printf("Name: ");
        puts(s[i].name);
        printf("Marks: %.1f",s[i].marks);
        printf("\n");
    }
    return 0;
}