#include <stdio.h>
// #include<conio.h>
#include <stdlib.h>
// #include<windows.h>

int add(int, int);
int sub(int, int);
int multiply(int, int);
int divide(int, int);
int main()
{
    char v;
    char choice;
    int num1, num2, result = 0;
    do
    {
        system("clear");
        printf("\t\t add(+)\n");
        printf("\t\t sub(-)\n");
        printf("\t\t multiply(*)\n");
        printf("\t\t divide(/)\n");
        printf("\t\t to exit enter(0)\n");

        // fflush(stdin);
        printf("enter the operation:\n");
        scanf("%c", &choice);
        if (choice == '+' || choice == '-' || choice == '*' || choice == '/')
        {
            printf("enter 2 amount\n");
            scanf("%d%d%*c", &num1, &num2);
        }
        switch (choice)
        {
        case '+':
            result = add(num1, num2);
            break;
        case '-':
            result = sub(num1, num2);
            break;
        case '*':
            result = multiply(num1, num2);
            break;
        case '/':
            result = divide(num1, num2);
            break;
        case '0':
            exit(0);
        default:
            printf("\t\tinvalid!! Next\n");
            continue;
        }
        printf(" \n\t\t \x1b[107m \x1b[31m  the result is %d \x1b[0m \n", result);
        printf("Press any key to continue....");
        scanf("%c", &v);
        // getch();

    } while (1);
    return 0;
}
int add(int n1, int n2)
{
    return n1 + n2;
}
int sub(int n1, int n2)
{
    return n1 - n2;
}
int multiply(int n1, int n2)
{
    return n1 * n2;
}
int divide(int n1, int n2)
{
    return n1 / n2;
}