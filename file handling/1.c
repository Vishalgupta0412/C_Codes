// #include <stdio.h>
// int main()
// {
//     FILE *fptr;
//     fptr = fopen("Vishalthis.txt", "w");
//     fclose(fptr);
//     return 0;
// }
//................................................................
// #include <stdio.h>
// int main()
// {
//     FILE *fptr;
//     fptr = fopen("Vishal.txt", "a");
//     fprintf(fptr, "\n everywhere i go no one is talking with me");
//     fclose(fptr);
//     return 0;
// }
//....................................................................
// #include <stdio.h>
// int main()
// {
//     FILE *fptr;
//     fptr = fopen("Vishal.txt", "r");
//     char mystring[2000];
//    // fgets(mystring, 2000, fptr);//read only first line
//     while(fgets(mystring,2000,fptr))
//     {                                //for other line using loop
//     printf("%s\n", mystring);
//     }
//     fclose(fptr);
//     return 0;
// }
//............for null................
// #include <stdio.h>
// int main()
// {
//     FILE *fptr;
//     fptr = fopen("filename.txt", "r");
//     if (fptr == NULL)
//     {
//         printf("Not able to open the file.");
//     }
//     fclose(fptr);
//     return 0;
// }
               //..........................................
#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("Vishal.txt", "r");
    char mystring[500];
    if(fptr!=NULL)
    {
        while(fgets(mystring,500,fptr))
        {
            printf("%s\n",mystring);
        }
    }
        else
        {
            printf("not able to open file.");
        }
    fclose(fptr);
    return 0;
}