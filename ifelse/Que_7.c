#include <stdio.h>

int main()
{
    int height;
    printf("enter the height(cm) :");
    scanf("%d",&height);

    if(height<=147)
    {
        printf("The Person is Dwarf. \n");
    }
    else
    {
        printf("The Person is not Dwarf.  \n");
    }
    return 0;
    
}