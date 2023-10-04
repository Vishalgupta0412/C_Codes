#include <stdio.h>
#include <stdlib.h>

int main()
{
    int status = system("date");
    if (status == -1)
    {
        printf("Command execution failed.\n");
        return 1;
    }
    return 0;
}