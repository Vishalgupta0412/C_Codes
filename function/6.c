// #include<stdio.h>
// void add(int,int);
// // void add(int a,int num2); //also valid
// //type 2 fxn : with argument no return type
// int main()
// {
//     int a=10,b=20;
//     printf("before calling in main \n");
//     add(a,b);
//     // printf(" sum = %d \n",sum); //error sum undeclared
//     printf("after calling in main \n");
//     return 0;
// }
// void add(int a,int num2)//variable name may be same or different
// {
//     int sum=a+num2;
//     printf("the sum is %d in add fxn \n",sum);
// }
                     //2nd process..................................................................................
// #include<stdio.h>
// int add();
// //type 3 fxn : no argument with return type
// int main()
// {
//     printf("before calling in main \n");
//     int sum=add();
    
//     printf("the value of sum is %d in main \n",sum);
//     return 0;
// }
// int add()
// {
//     int a=10,b=20;
//     printf(" in add fxn  \n");
//     return (a+b);
// }
            //3rd step .............................................
#include<stdio.h>
int add(int,int);
// int add(int a,int num2);
//type 4 fxn : with argument and return type
int main()
{
    int a=10,b=20;
    printf("before calling in main \n");
    int sum=add(a,b);
    printf("the sum is %d in main \n",sum);
    return 0;
}
int add(int a,int num2)
{
    printf(" in add fxn  \n");
    return (a+num2);
}
//h.w make a calculator using switch and function