#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void insert(FILE *fp);
void display(FILE *fp);
struct
{
    char name[50];
    char city[15];
    float salary;
    char department[50];
    int mobile;
} employee;
int main(void)
{
    int choice;
    FILE *fp;
    fp = fopen("employeedetail", "rb+");
    if (fp == NULL)
    {
        fp = fopen("employeedetail", "wb+");
        if (fp == NULL)
        {
            puts("error\n");
            exit(1);
        }
    }
    return 0;
}
while (1)
{
    printf("1.insert\n");
    printf("2.Display\n");
    printf("3.exit\n");
    printf("Enter your choice:\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        insert(fp);
        break;
    case 2:
        Display(fp) : break;
    case 3:
        fclose(fp);
        exit(1);

    default:
        printf("wrong choice\n") break;
    }
}