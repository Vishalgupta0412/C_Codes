#include <stdio.h>
struct employee
{
    int id;
    char name[20];
    struct
    {
        int pincode;
        char city[20];
    } addr;
    float salary;
};
int main()
{
    struct employee emp1;
    printf("enter employee id:");
    scanf("%d", &emp1.id);
    printf("employe name:");
    fflush(stdin);
    scanf(" %[^\n]s", emp1.name);
    fflush(stdin);
    printf("enter employee salary:");
    scanf("%f", &emp1.salary);
    printf("enter pincode:");
    scanf("%d", &emp1.addr.pincode);
    fflush(stdin);
    printf("enter the employee city:");
    scanf("%[^\n]s", emp1.addr.city);
    fflush(stdin);
    printf("employee id is %d ", emp1.id);
    printf("employee name is %s ", emp1.name);
    printf("employee salary is %.2f ", emp1.salary);
    printf("employee pincode is %d ", emp1.addr.pincode);
    printf("employee city is %s ", emp1.addr.city);
    return 0;
}
