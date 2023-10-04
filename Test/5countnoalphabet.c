#include<stdio.h>
int main()
{
    char arr[100];
    int i;
    int upper=0,lower=0,special=0;;
    printf("enter : \n");
    gets(arr);
    
    // For Uppercase
    for(i=0; arr[i] != '\0'; i++)
    {
            if(arr[i]>='A' && arr[i]<='Z') 
            {
                upper++;
            }
    
    // For Lowercase
    else if(arr[i]>='a' && arr[i]<='z') 
            { 
               lower++;
            }
   
    // For special
    else
        {
        special++;
        }
    }
    printf("\nUpper case letters: %d",upper);
    printf("\nLower case letters: %d",lower);
    printf("\nSpecial characters: %d\n",special);
 
    return 0;
}
