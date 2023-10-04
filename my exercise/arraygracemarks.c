#include <stdio.h>
int main()
{
    int marksList[5];
    int i;
    int grace = 5;
    /*grace marks */
    /* Read the marksList */
    printf ("\n Enter the list of marks one by one \n");
    for (i = 0; i < 5; i++)
    {
        scanf ("%d", &marksList[i]);
        marksList[i] = marksList[i] + grace;
    }
        /* Print the Final list */
        printf ("\n The final List is ...");
        printf ("\n S. No.\t Marks");
        for (i = 0; i < 5; i++)
        printf ("\n %d\t%d", i, marksList[i]);
        return 0;
}