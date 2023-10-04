#include <stdio.h>
int main()
{
    float physics, chemistry, maths, result;
    printf("enter 3 subject marks :\n");
    scanf("%f%f%f", &physics, &chemistry, &maths);

    if (maths >= 80 && chemistry >= 65 && physics >= 70)
    {
        if ((maths + chemistry + physics) >= 210 || (maths + physics) >= 150)
        {
            printf("qualify for Air Force");
        }
        else
        {
        printf("not qualify for Air Force");
        }
    }    
    else
    {
    printf("qualify for submarine \n");
    }
    return 0;
}