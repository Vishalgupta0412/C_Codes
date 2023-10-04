#include<stdio.h>
//void sub();
void sub();//fxn declaration 

int main(/* arguments(parameters) */)//starting point of program
{
    printf("before calling in main \n");
    sub();//calling of fxn
    sub();//calling of fxn
    sub();//calling of fxn
    // sub();//calling of fxn
    // sub();//calling of fxn
    // sub();//calling of fxn
    // sub();//calling of fxn
    printf("after calling in main \n");
    return 0;//ending point of program
}
//user defined fxn
void sub(/*parameter*/)
{   //body open
    printf("hii i am subing something\n");// code 10000K
    //void is fxn return type
} 