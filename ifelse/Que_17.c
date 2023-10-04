#include <stdio.h>

int main()
{
    char alp;
    printf("enter the alphabet :\n");
    scanf("%c",&alp);

    if(alp=='A' || alp=='E' || alp=='I' || alp=='O' || alp=='U' || alp=='a' || alp=='e' || alp=='i' || alp=='o' || alp=='u')
    {
        printf("Vowel \n");
    }
    
    else
    {
        printf("consonent\n");
    }
    return 0;
}