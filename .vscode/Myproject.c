#include <stdio.h>
struct employee

{
    char name[20];
    char city[20];
    int mobile[10];
    char department[25];
    int salary[6];
};
int main()
{
    struct employee emp[5] ;
    FILE *fptr;
    fptr = fopen("/home/dell/Desktop/Employeedata.txt", "a");
    for (int i = 0; i < 5; i++)
    {
        fflush(stdin);
        printf("enter name:\n");
        gets(emp[i].name);
        printf("enter city:\n");
        gets(emp[i].city);
        printf("enter salary:\n");
        gets(emp[i].salary);
        printf("enter mobile:\n");
        gets(emp[i].mobile);
        printf("enter department:\n");
        gets(emp[i].department);
    }
    for (int i = 0; i < 5; i++)
     // for (int name=1;name<6;name++)
    {
        fprintf(fptr,"Name=%s\n", emp[i].name);
         fprintf(fptr,"\tCity=%s\n", emp[i].city);
          fprintf(fptr,"\t\tSalary=%s\n", emp[i].salary);
           fprintf(fptr,"\t\t\tMobile=%s\n", emp[i].mobile);
            fprintf(fptr,"\t\t\t\tDepartment=%s\n", emp[i].department);
          
    }
    fclose(fptr);
    return 0;
}