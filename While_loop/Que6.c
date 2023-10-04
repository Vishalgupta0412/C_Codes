#include<stdio.h>
int main()
{
    int i,sum=0;
    printf("enter digit :\n");
    scanf("%d", &i);
   

    while (i > 0)
    {
        int remender = i%10;
        if(remender%2 == 0){
            sum += remender;
        }
        i/=10;
    }
    

    printf("even sum %d\n", sum);



    return 0;
}
