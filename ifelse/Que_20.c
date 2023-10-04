#include<stdio.h>
int main()
{
    char grade;
    printf("enter the grade:\n");
    scanf("%c",&grade);

    if(grade=='E'|| grade=='e')
    {
        printf("Excellent \n");
    }
    else if(grade=='V'|| grade=='v')
    {
        printf("Very good \n");
    }
    else if(grade=='G'|| grade=='g')
    {
        printf("Good \n");
    }
    else if(grade=='A'|| grade=='a')
    {
        printf("Average \n");
    
    }
    else if(grade=='F'|| grade=='f')
    {
        printf("Fail \n");
    }
    else
    {
        printf("Not Valid \n");
    }
    return 0;
}